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
		int c=0;
		for(int i=0;i<n;i++)
		{
			int counter=1;
			for(int j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					counter++;
				}
			}
			c=max(c,counter);
		}
		
		cout<<n-c<<endl;
	}
}
