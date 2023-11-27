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
		int n,d;
		in>>n>>d;
		
		vi a(n);
		int risk=0;
		int unrisky=0;
		for(auto &i:a)
		{
			in>>i;
			
			if(i<=9||i>=80)
			risk++;
			else
			unrisky++;
		}
		
		int ans=0;
		
		if(risk%d==0)
		{
			ans+=risk/d;
		}
		else
		{
			ans+=(risk/d)+1;
		}
		
		if(unrisky%d==0)
		{
			ans+=unrisky/d;
		}
		else
		{
			ans+=(unrisky/d)+1;
		}
		
		ou<<ans<<nl;		
	}
}



