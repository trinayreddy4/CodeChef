#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int s=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        s+=a[i];
	    }
	    cout<<s<<endl;
	    if(s&1 && s>2)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	    
	}
	return 0;
}

