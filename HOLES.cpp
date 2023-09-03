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
		int cnt=0;
		for(int i=0;i<s.length();i++)
		{
			if (s[i]=='A'||s[i]=='D'||s[i]=='O'||s[i]=='P'||s[i]=='R'||s[i])=='Q'
			{
				cnt++;
			}
			else if(s[i]=='B')
			cnt+=2;
		}
		cout<<cnt<<endl;
		
	}
}
