#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define yes ou<<"YES"<<nl;
#define no ou<<"NO"<<nl;
#define all(arr) arr.begin(),arr.end()
#define maxn 1000000
#define modn 1000000007
using ll=long long;
using lli=long long int;
using namespace std;
typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;
vector<int>nums(maxn);
ll count(int n)
{
	ll c=0;
	while(n>0)
	{
		n=n&(n-1);
		c++;
	}
	return c;
}
int main()
{
    fastread();
    nums[0]=0;
    nums[1]=1;
    nums[2]=2;
    for(int i=3; i<=maxn; i++){
        nums[i] = (nums[i-1]%modn + nums[i-2]%modn)%modn;
    }
	int t;
	cin>>t;
	while(t--)
	{
		int n,g;
		in>>n>>g;
		if(count(nums[n])==g)
		{
			ou<<"CORRECT"<<nl;
		}
		else
		{
			ou<<"INCORRECT"<<nl;
		}
	}
}



