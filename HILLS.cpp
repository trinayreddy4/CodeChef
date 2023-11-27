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
		int n,u,d;
		in>>n>>u>>d;
		
		vi a(n);
		
		for(auto &i:a)
		in>>i;
		bool para=true;
		int r=1;
		for(int i=0;i<n-1;i++)
		{
			if(a[i+1]>=a[i])
			{
				if(abs(a[i+1]-a[i])<=u)
				{
					r++;
				}
				else
				{
					break;
				}
			}
			else
			{
				if(abs(a[i]-a[i+1])<=d)
				{
					r++;
				}
				else if(para)
				{
					r++;
					para=false;
				}
				else
				{
					break;
				}
			}
		}
		ou<<r<<nl;
	}
}



