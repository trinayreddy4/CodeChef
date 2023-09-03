#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int skip=0;
		for(int i=0;i<n-1;i++)
		{
			int t=abs(a[i+1]-a[i]);
			skip+=t;
		}
		cout<<skip-(n-1)<<endl;
	}
}
