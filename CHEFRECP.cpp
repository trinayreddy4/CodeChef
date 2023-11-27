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
		
		bool flag=true;
		//distinct jar for each ingredient
		map<int,stack<int>>m;
		set<int>s(a.begin(),a.end());
		for(int i=0;i<n;i++)
		{
			if(!m[a[i]].empty() && m[a[i]].top()!=i-1)
			{
				flag=false;
				break;
			}
			m[a[i]].push(i);
		}
		
		unordered_set<int>s1;
		if(!flag)
		{
			no
			continue;
		}
		
		for(auto i:m)
		{
			s1.insert(i.second.size());
		}
		
		if(s.size()!=s1.size())
		{
			no
			continue;
		}
		yes
	}
}


