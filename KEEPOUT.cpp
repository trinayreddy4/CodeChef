#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vector<bool>temp(m+1,true);
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		temp[0]=false;
		temp[m]=false;
		for(int i=0;i<n;i++)
		{
			int ans=-1;
			temp[a[i]]=false;
			int len=1;
			for(int j=0;j<=m;j++)
			{
				len++;
				if(!temp[j])
				{
					len=1;
				}
				ans=max(ans,len);
			}
			cout<<ans<<" ";
		}
		
		cout<<endl;
	}
}

