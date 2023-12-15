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
		int n,i,x;
	    vector<int> v;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>x;
	        v.push_back(x);
	    }
	    int gcd;
	    gcd=v[0];//3
	    vector<int> pre;//1 1 1 1 
	    for(i=0;i<n;i++)
	    {
	        gcd=__gcd(gcd,v[i]);
	        pre.push_back(gcd);
	    }
	    gcd=v[n-1];//11
	    vector<int> suf;
	    for(i=n-1;i>=0;i--)
	    {
	        gcd=__gcd(gcd,v[i]);
	        suf.push_back(gcd);
	    }
	    reverse(suf.begin(),suf.end());
	    int res=0;
	    for(i=1;i<n-1;i++)
	    {
	        if(__gcd(pre[i-1],suf[i+1])!=1)
	        {
	            res++;
	        }
	    }
	    if(pre[n-2]!=1)
	    {
	        res++;
	    }
	    if(suf[1]!=1)
	    {
	        res++;
	    }
	    cout<<res<<endl;
	}
}



