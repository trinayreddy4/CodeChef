#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define yes ou<<"YES"<<nl;
#define no ou<<"NO"<<nl;
#define all(arr) arr.begin(),arr.end()
using ll=long long;
using lli=long long int;
using namespace std;
typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;
int main()
{
    fastread();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		in>>n;
		vi a(n);
		for(auto &i:a)
		in>>i;
		
		sort(all(a));
		int presum[n];
		presum[0]=a[0];
		for(int i=1;i<n;i++)
		{
			presum[i]=presum[i-1]+a[i];
		}
		int ans=0;
		for(int i=0;i<n-1;i++)
		{
			if(a[i+1]>presum[i])
			{
				ans++;
			}
		}
		//1 3 7
		ou<<ans<<nl;
		
		for(auto i:a)
		ou<<i<<" ";
		
		ou<<nl;
	}
}



