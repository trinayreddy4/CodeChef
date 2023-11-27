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
		string s;
		in>>s;
//		string st=bitset<8>(s).to_string();
		bitset<255>a(s);
		
		int set=a.count();
		int ns=s.length()-set;
//		ou<<set<<" "<<ns;
		if(set==1||ns==1)
		{
			ou<<"Yes"<<nl;
		}
		else
		ou<<"No"<<nl;
		
	}
}



