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
		cin>>n;
		
		string s;
		in>>s;
		
		if(s.find("0101")!=string::npos ||s.find("1010")!=string::npos)
		{
			no
		}
		else if(n<=3&&s.find("101")!=string::npos ||s.find("010")!=string::npos)
		{
			no
		}
		else
		yes
	}
}



