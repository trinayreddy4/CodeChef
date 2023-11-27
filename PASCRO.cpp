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
		
		string a,b;
		in>>a>>b;
		int as=0,bs=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]==b[i])
			continue;
			else if(a[i]=='R'&&b[i]=='S')
			{
				as++;
			}
			else if(a[i]=='S'&&b[i]=='R')
			{
				bs++;
			}
			else if(a[i]=='S'&&b[i]=='P')
			{
				as++;
			}
			else if(a[i]=='P'&&b[i]=='S')
			{
				bs++;
			}
			else if(a[i]=='P'&&b[i]=='R')
			{
				as++;
			}
			else if(a[i]=='R'&&b[i]=='P')
			{
				bs++;
			}
		}
		
		if(as<=bs)
		ou<<((bs-as))/2 +1<<nl;
		else
		ou<<0<<nl;
	}
}



