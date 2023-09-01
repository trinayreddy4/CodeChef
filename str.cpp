#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a="I hate that ";
	string b="I love it ";
	string c="";
	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i&1)
		{
			c+=a;
		}
		else
		{
			c+=b;
		}
	}
	cout<<c<<endl;
}
