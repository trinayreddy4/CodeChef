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
		int a,b,c;
		in>>a>>b>>c;
		if(c>max(a,b))
		{
			ou<<"Charlie"<<nl;
		}
		else if(b>max(a,c))
		{
			ou<<"Bob"<<nl;
		}
		else
		{
			ou<<"Alice"<<nl;
		}
	}
}


