#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,h;
		cin>>x>>h;
		//x damage h is opponent health
		int rounds=0;
		bool flag=false;
		for(int i=1;i<=5;i++)
		{
			h-=x/2;
			if(h<=0)
			{
				cout<<i<<endl;
				flag=true;
				break;
			}
			rounds++;
		}
		if(!flag)
		{
//			cout<<h<<endl;
			while(h>0)
			{
				h-=x;
				rounds++;
			}
			
		cout<<rounds<<endl;
		}
	}
}

