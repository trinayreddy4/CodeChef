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
		vi a(n),d(n);
		
		for(auto &&i:a)
		{
			in>>i;	
		}
		
		for(auto &&i:d)
		{
			in>>i;
		}
		
		vi te;
		int temp=a[1]+a[n-1];
		if(d[0]-temp>0)
		{
			te.push_back(d[0]);
		}
		for(int i=1;i<n-1;i++)
		{
			if(d[i]-(a[i-1]+a[i+1])>0)
			{
				te.push_back(d[i]);
			}		
		}
		
		int temp2=a[n-2]+a[0];
		if(d[n-1]-temp2>0)
		{
			te.push_back(d[n-1]);
		}
		if(te.empty())
		{
			ou<<-1<<nl;
		}
		else
		{
		auto it=max_element(te.begin(),te.end());
		ou<<*it<<nl;
		}
	}
}


