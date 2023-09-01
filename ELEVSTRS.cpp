#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--)
	{
	    int n,v1,v2;
	    cin>>n>>v1>>v2;
	    double s=n*1.4142135623730950488016887242097;
	    cout<<s/v1<<endl;
	    if((s/v1)<(n/v2))
	    {
	    	cout<<"Stairs"<<endl;
		}
		else
		{
			cout<<"Elevator"<<endl;
		}
	}
	return 0;
}

