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
		
		for(auto &&i:a)
		{
			in>>i;
		}
		
		int temp=a[0];
			int i=1;
			for(i=1;i<n-1;i++)
			{
				if(a[i]!=temp)
				{
					break;
				}
			}
		
		if(a[0]==a[n-1])
		{
			ou<<n-1-i<<nl;
		}
		else
		{
			ou<<n-i<<nl;
		}
	}
}


