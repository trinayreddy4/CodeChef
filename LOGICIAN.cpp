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
		
		string s;
		in>>s;
		bool all=true;
		for(int i=0;i<n;i++)
		{
			if(!all)
			{
				no
				continue;
			}
			if(s[i]=='0')
			{
				no
				all=false;
			}
			else
			{
				if(i==s.length()-1)
				{
					yes
				}
				else
				{
					ou<<"IDK"<<nl;
				}
			}
		}
	}
}



