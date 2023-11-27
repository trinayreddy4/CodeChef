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
		int n,k;
		in>>n>>k;
		
		vi a(n);
		int sum=0;
		for(auto &i:a)
		{
		in>>i;
		sum+=i;
		}
		
		if(k==0)
		{
			if(sum%n==0)
			yes
			else
			no
			
			continue;
		}
		
		if(sum<n)
		{
			no
			continue;
		}
		
		yes
		
	}
}



