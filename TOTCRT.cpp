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
		
		map<string,int>mp;
		unordered_set<string>s;
		for(int i=0;i<n;i++)
		{
			string te;
			in>>te;
			if(s.find(te)==s.end())
			{
				s.insert(te);
			}
			int a;
			in>>a;
			mp[te]+=a;
		}
		for(int i=0;i<n;i++)
		{
			string te;
			in>>te;
			if(s.find(te)==s.end())
			{
				s.insert(te);
			}
			int a;
			in>>a;
			mp[te]+=a;
		}
		for(int i=0;i<n;i++)
		{
			string te;
			in>>te;
			if(s.find(te)==s.end())
			{
				s.insert(te);
			}
			int a;
			in>>a;
			mp[te]+=a;
		}
		vector<int>ans;
		for(auto i:s)
		{
			ans.push_back(mp[i]);
		}
		sort(ans.begin(),ans.end());
		
		for(auto i:ans)
		{
			ou<<i<<" ";
		}
		
		ou<<nl;
		
	}
}



