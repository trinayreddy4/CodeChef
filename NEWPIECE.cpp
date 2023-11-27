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
		 cin >> a >> b >> p >> q;
	    if (a == p && b == q)
	        cout << "0\n";
	    else if ((a + b) % 2 == (p + q) % 2)
	        cout << "2\n";
	    else
	        cout << "1\n";
	}
}



