#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n;
	    cin>>m>>n;
	    vector<bool>sieve(n+1,true);
	    sieve[0]=sieve[1]=false;
	    for(int i=2;i<=n;i++)
	    {
	        if(sieve[i])
	        {
	        for(int j=i*i;j<=n;j+=i)
	        {
	            sieve[j]=false;
	        }
	        }
	    }
	    
	    for(int i=m;i<=n;i++)
	    {
	        if(sieve[i])
	        cout<<i<<endl;
	    }
	}
	return 0;
}

