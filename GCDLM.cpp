#include<bits/stdc++.h>
#include<numeric>
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
		int x,y,k;
		in>>x>>y>>k;
		
		
		if(x>y)
		{
			swap(x,y);
		}
		
		if(k==1)
		ou<<x+gcd(x,y)<<nl;
		else
		ou<<2*gcd(x,y)<<nl;
	}
}



