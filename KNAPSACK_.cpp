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
int knapSack(int W, int wt[], int val[], int n) 
{ 
  
    if (n == 0 || W == 0) 
        return 0; 
  
    if (wt[n - 1] > W) 
        return knapSack(W, wt, val, n - 1); 
    else
        return max( 
            val[n - 1] 
                + knapSack(W - wt[n - 1], wt, val, n - 1), 
            knapSack(W, wt, val, n - 1)); 
} 
int main()
{
    fastread();
	int t;
	cin>>t;
	while(t--)
	{
		int n,v;
		in>>n>>v;
		int w[n],p[n];
		
		for(int i=0;i<n;i++)
		{
			in>>w[i]>>p[i];
		}
		ou<<knapSack(v,w,p,n)<<nl;
	}
}

