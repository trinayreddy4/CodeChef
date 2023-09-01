#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=0,b=1;
	int n;
	cin>>n;
	int height=0;
	vector<int>fib(n+1);
	fib[0]=0;
	fib[1]=1;
	for(int i=2;i<=100;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
//		cout<<fib[i]<<" ";
	}
//	for(int i=1;i<=n;i++)
//	{
//		cout<<fib[i]<<" ";
//	}
	int i=2;
	while(n>=fib[i])
	{
		height++;
		n-=fib[i];
		i++;
	}
	cout<<height<<endl;
	
}
