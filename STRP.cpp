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
	    string s;
	    cin>>s;
	    int times=0;
	    for(int i=n-1;i>=0;i--)
	    {
	        if(s[i]==s[i-1])
	        {
//	        	cout<<i<<" ";
	            i--;
//	            cout<<i<<endl;
	        }
	        
	        times++;
	    }
	    cout<<times<<endl;
	}
	return 0;
}

