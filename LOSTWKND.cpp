#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[5],p,total=0;
		for(int i=0;i<5;i++)
		{
			cin>>a[i];
//			total+=a[i];
		}
		cin>>p;
		int maxw=0;
		for(int i=0;i<5;i++)
		{
			maxw+=(p*a[i]);	
		}
		
		if(maxw<=120)
		{
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes"<<endl;
		}
	}
}
