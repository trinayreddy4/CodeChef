#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,x;
		cin>>a>>b>>x;
		int c=abs(a-b);
		
		if(c%(2*x)==0)
		{
			cout<<"YES"<<endl;
		}
		else
		cout<<"NO"<<endl;
	}
}
