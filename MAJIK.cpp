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
		
		int p,q;
		in>>p>>q;
		
		vi a(n);
		
		for(auto &i:a)
		in>>i;
		
		for(int i=0;i<p;i++)
		{
			if(a.size()==2)
			{
				break;
			}
			sort(a.begin(),a.end());
			int t=a[0]+a[1];
			a.erase(a.begin());
			a.erase(a.begin()+1);
			a.insert(a.begin(),t);
		}
		
		for(int i=0;i<q;i++)
		{
			if(a.size()==2)
			{
				break;
			}
			sort(a.begin(),a.end());
			int t=a[0]+a[1];
			a.erase(a.begin());
			a.erase(a.begin()+1);
			a.insert(a.begin(),t);
			
		}
		
	}
}



