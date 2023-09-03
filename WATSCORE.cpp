#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],s[n];
		vector<int>temp(9,0);
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        cin>>s[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	    	if(a[i]>=1&&a[i]<=8)
	    	{
	    		temp[a[i]]=max(temp[a[i]],s[i]);
			}
		}
		int score=0;
		for(int i=0;i<temp.size();i++)
		{
			score+=temp[i];
		}
		cout<<score<<endl;	    
	}
	return 0;
}

