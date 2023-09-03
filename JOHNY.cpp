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
		vector<int>a(n);
		vector<int>::iterator it;
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		int k;
		cin>>k;
		int jhonnyuncle=a[k-1];
		sort(a.begin(),a.end());
		it=find(a.begin(),a.end(),jhonnyuncle);
		cout<<it-a.begin()+1<<endl;
		
	}
}
