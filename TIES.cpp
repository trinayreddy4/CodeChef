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
		
		vi a(n);
		bool eq=true;
		int sum=0;
		for(auto &i:a)
		{
			in>>i;
			sum+=i;
		}
		
		for(int i=0;i<n-1;i++)
		{
			if(a[i]!=a[i+1])
			{
				eq=false;
				break;
			}
		}
		bool flag=true;
		
		if(eq)
		{
			ou<<"Yes"<<nl;
			continue;
		}
		
		
		if((sum%n)!=0)
		{
		ou<<"No"<<nl;
		continue;
		}
		
		int te=sum/n;
		
		for(int i=0;i<n;i++)
		{
			int tem=a[i]-te;
			if((tem%2)!=0)
			{
				ou<<"No"<<nl;
				flag=false;
				break;
			}
		}
		if(flag)
		{
			ou<<"Yes"<<nl;
		}
	}
}



