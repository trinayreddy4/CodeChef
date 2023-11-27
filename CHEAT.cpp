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
		
		int temp=n/7;
		
		if(temp==0)
		{
			if(n>=2)
			ou<<1<<nl;
			else
			ou<<0<<nl;
		}
		else
		{
			temp+=(n%7>=2)?1:0;
			ou<<temp<<nl;
		}
		
	}
}



