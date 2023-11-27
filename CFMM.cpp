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
		
		vs a(n);
		unordered_map<char,int>mp;
		for(auto &i:a)
		{
			in>>i;
			for(int j=0;j<i.length();j++)
			mp[i[j]]++;
		}
		
		int c=mp['c'];
		int o=mp['o'];
		int d=mp['d'];
		int e=mp['e'];
		int h=mp['h'];
		int f=mp['f'];
		
		c=c/2;
		e=e/2;
		ou<<min(c,min(o,min(d,min(e,min(h,f)))))<<nl;
	}
}



