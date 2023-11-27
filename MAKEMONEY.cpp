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
		int n,x,c;
		in>>n>>x>>c;
		
		vi a(n);
		for(auto &&i:a)
		{
			in>>i;
		}
		int work=0;
		for(int i=0;i<n;i++)
		{
			if(abs(x-a[i])>=c)
			{
				a[i]=x;
				work+=c;
			}
		}
		int sum=0;
		for(auto i:a)
		sum+=i;
		
		ou<<sum-work<<nl;
	}
}


