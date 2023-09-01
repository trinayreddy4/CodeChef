#include<bits/stdc++.h>
using namespace std;
bool checksum(int n,bool odd)
{
	int s=0;
	while(n>0)
	{
		s+=n%10;
		n/=10;
	}
	if(s%2==0 && !odd)
	{
		return true;
	}
	else if(s&1 &&odd)
	return true;
	else
	return false;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
//		int n;
//		cin>>n;
//		bool odd=false;
//		if(n&1)
//		odd=true;
////		cout<<odd<<endl;
//		for(int i=n+1;i<=100000000;i++)
//		{
//			if(checksum(i,odd))
//			{
//				cout<<i<<endl;
//				break;
//			}
//		}
		auto d=sqrt(5);
		cout<<d<<endl;
	}
}
