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
		int n,x;
		in>>n>>x;
		
		vi a(n);
		
		for(auto &i:a)
		{
			in>>i;
		}
		
		int max_left=INT_MIN;
		int max_right=INT_MAX;
		int i=0;
		for(i=0;i<n;i++)
		{
			if(a[i]>x)
			{
				max_right=min(max_right,a[i]);
			}
			else
			{
				max_left=max(max_left,a[i]);
			}
			
			
			if(a[i]>max_right||a[i]<max_left)
			{
				no
				break;
			}
		}
		if(i==n)
		{
			yes
		}
	}
}



