#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		bool flag=true;
		int opp=0,chef=0;
		
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='0')
			opp++;
			else
			chef++;
			
		}
		if(chef>opp)
			{
				cout<<"WIN"<<endl;
			}
		else
		cout<<"LOSE"<<endl;

		
	}
}
