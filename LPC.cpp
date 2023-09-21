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
		int n,m;
		in>>n>>m;
		
		map<char,int>t;
		string a,b;
		in>>a>>b;
		
		for(int i=0;i<n;i++)
		{
			t[a[i]]++;
		}
		bool flag=true;
		int left=0,right=0;
		int count=n;
		while(right<m)
		{
			if(t[b[right++]]-->0)
			count--;
			
			while(count==0)
			{
				if(right-left==n)
				{
					ou<<count<<nl;
					flag=false;
					break;
				}
				if(++t[b[left++]]>0)
				count++;
			}
			
		}
		if(flag)
		cout<<0<<nl;
	}
}


