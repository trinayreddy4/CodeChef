#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define yes ou<<"YES"<<nl;
#define no ou<<"NO"<<nl;
#define all(arr) arr.begin(),arr.end()
using ll=long long;
using lli=long long int;
using namespace std;
typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;
int main()
{
    fastread();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		in>>n;
		
		string s;
		in>>s;
		
		string t="";
		
		bool alice=true,bob=false;
		
		for(int i=0;i<n;i++)
		{
			if(alice)
			{
				string temp=s.substr(0,1);
				s=s.substr(1,s.size()-1);
				if(temp=="0")
				{
					t=temp+t;
				}
				else
				{
					t=t+temp;
				}
				alice=false;
				bob=true;	
			}
			else if(bob)
			{
				string temp;
				if(s.size()>=2)
				temp=s.substr(s.size()-2,1);
				else
				continue;
				s=s.substr(0,s.size()-1);
				
				if(temp=="0")
				{
					t=t+temp;
				}
				else
				{
					t=temp+t;
				}
				alice=true;
				bob=false;
			}	
		}
		ou<<t<<nl;
	}
}



