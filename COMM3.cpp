#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int r;
	    cin>>r;
	    int x1,y1,x2,y2,x3,y3;
	    cin>>x1>>y1>>x2>>y2>>x3>>y3;
	    
	    auto c=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	    auto d=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
        cout<<c<<" "<<d<<endl;
		if(abs(d-c)>r)
        {
            cout<<"no"<<endl;
        }
        else if(abs(d-c)<=r)
        {
            cout<<"yes"<<endl;
        }
	}
	return 0;
}

