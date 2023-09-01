#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,s;
		cin>>n>>x>>s;
		int a,b;
		for(int i=0;i<s;i++)
		{
			cin>>a>>b;
			if(b==x)
			{
				x=a;
			}
			else if(a==x)
			{
				x=b;
			}
		}
		cout<<x<<endl;
	}
}
