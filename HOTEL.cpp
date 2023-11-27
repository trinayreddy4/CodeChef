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
		vi a(n),b(n);
		
		for(auto &i:a)
		{
			in>>i;
		}
		
		for(auto &i:b)
		{
			in>>i;
		}
		
		map<int,int>mp;
		
		int ans=INT_MIN;
		for(int i=0;i<n;i++)
		{
			for(int j=a[i];j<b[i];j++)
			{
				mp[j]++;
				ans=max(ans,mp[j]);
			}
		}
		ou<<ans<<nl;
	}
}



