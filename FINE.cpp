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
		int x;
		in>>x;
		
		if(x<=70)
		{
			ou<<0<<nl;
		}
		else if(x>70&&x<=100)
		{
			ou<<500<<nl;
		}
		else
		{
			ou<<2000<<nl;
			
		}
	}
}


