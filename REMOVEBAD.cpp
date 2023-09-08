#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		vector<int>max_freq(n+1,0);
		for(auto &&i:a)
		{
			cin>>i;
			max_freq[i]++;
		}
		int maxe=-1;
		
		for(int i=1;i<=n;i++)
		{
			cout<<maxe<<endl;
			maxe=max(max_freq[i],maxe);
		}
		
		cout<<n-maxe<<endl;
	
	}
}

