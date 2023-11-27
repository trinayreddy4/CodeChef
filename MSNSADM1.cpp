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
		vi b(n);
		
		for(auto &&i:a)
		in>>i;
		
		for(auto &&i:b)
		in>>i;
		
		vi c(n);
		
		for(int i=0;i<n;i++)
		{
//			ou<<a[i]<<" "<<b[i]<<nl;
			int te=(a[i]*20)-(b[i]*10);
			if(te>0)
			{
				c[i]=te;
			}
			else
			{
				c[i]=0;
			}
		}
		int maxe=c[0];
		for(int i=1;i<n;i++)
		{
			if(maxe<c[i])
			{
				maxe=c[i];
			}
		}
		ou<<maxe<<nl;
	}
}


