#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define yes ou<<"YES"<<nl;
#define no ou<<"NO"<<nl;
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
	
		for(auto &&i:a)
		in>>i;
		
		sort(a.begin(),a.end());
		
		int ans=INT_MAX;
		
		for(int i=n-1;i>0;i--)
		{
			ans=min(abs(a[i]-a[i-1]),ans);
		}
		ou<<ans<<nl;
	}

}
