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
		int n,k;
		in>>n>>k;
		
		vi a(n);
		
		for(auto &i:a)
		in>>i;
		
		map<int,int>mp;
		
		for(int i=0;i<n;i++)
		{
			if(a[i]==i+1)
			{
				mp[a[i]]=-1;
			}
			
			if(mp[a[i]]!=-1)
			mp[a[i]]++;
		}
		
		int ans=0;
		
		for(auto i:mp)
		{
			if(i.second>=k)
			{
				ans++;
			}
		}
		ou<<ans<<nl;
	}
}



