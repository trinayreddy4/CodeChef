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
	int n;
	cin>>n;
	
	vi s(n);
	for(auto &&i:s)
	{
		in>>i;
	}
	
	vi temp1(n+1,0);
	
	for(int i=0;i<n;i++)
	{
		if(s[i]==0)
		{
			temp1[i+1]=-100000;
		}
		else
		temp1[s[i]]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(temp1[i]==0)
		cout<<i<<" ";
		
//		cout<<temp1[i]<<endl;
	}	
	cout<<endl;
}


