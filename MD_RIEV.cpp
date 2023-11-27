#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
    int N;
    cin>>N;
    if(N<=4)
    {
    	cout<<0<<" "<<N<<endl;
		continue;
	}
	cout<<1<<" "<<N-1<<endl;
	}
	return 0;
}

