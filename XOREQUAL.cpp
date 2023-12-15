#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define yes ou<<"YES"<<nl;
#define no ou<<"NO"<<nl;
#define all(arr) arr.begin(),arr.end()
#define M 1000000007
using ll=long long;
using lli=long long int;
using namespace std;
typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;
ll mypower(int a,int b)
{
	if(b==0)
	return 1;
	
	ll res=mypower(a,b/2);
	
	if(res&1)
	{
		return (a*res*res)%m;
	}
	else
	return (res*res)%m;
}
int main()
{
    fastread();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		in>>n;
		
		ll ans=mypower(2,n-1);
		ou<<ans%m<<nl;
	}
}



