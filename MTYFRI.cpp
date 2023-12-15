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
		int n,k;
		in>>n>>k;
		
		vi a(n),motu,tomu;
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
			if(i&1)
			{
				tomu.push_back(a[i]);
			
			}
			else
			{
				motu.push_back(a[i]);
			}
		}
		
		sort(all(motu));
		sort(all(tomu));
		
		//2 4 6
		//3 4
		int m=motu.size();
		for(int i=0;i<k;i++)
		{
			if(tomu[i]<motu[m-i-1])
			{
				swap(tomu[i],motu[m-i-1]);
			}
			else
			{
				break;
			}
		}
		
		int mo=accumulate(all(motu),0);
		int tom=accumulate(all(tomu),0);
		
		if(tom>mo)
		{
			yes
		}
		else
		{
			yes
		}
	}
}



