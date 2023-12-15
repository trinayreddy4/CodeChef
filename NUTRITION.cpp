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
		
		vi b(n);
		for(auto &i:b)
		in>>i;
		
		map<int,int>mp;
		
		for(int i=0;i<n;i++)
		{
			mp[a[i]]=max(mp[a[i]],b[i]);
		}
		
		int ans=0;
		for(auto i:mp)
		{
			ans+=i.second;
		}
		ou<<ans<<nl;
	}
}



