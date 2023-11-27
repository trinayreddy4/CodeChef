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
		
		string s;
		in>>s;
		int count=0;
		for(int i=0;i<s.length()-1;i++)
		{
			if(s[i]=='0'&&s[i+1]=='1')
			{
				count++;
			}
		}
		
		if(s[0]=='1')
		count++;
		if(s[n-2]=='0')
		count++;
		
		ou<<count<<nl;
	}
}


