#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define yes ou<<"YES"<<nl;
#define no ou<<"NO"<<nl;
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
		float l,v1,v2;
		in>>l>>v1>>v2;
		
		float tort_time=l/v1;
		float haier_time=l/v2;
//		ou<<floor(haier_time);
		if(haier_time>floor(haier_time))
		{
			haier_time=floor(1+haier_time);
		}
		if(tort_time>floor(tort_time))
		{
			tort_time=floor(1+tort_time);
		}
//		ou<<tort_time<<" "<<haier_time;
		if(tort_time-haier_time==0)
		{
			ou<<-1<<nl;
		}
		else
		{
			ou<<tort_time-haier_time-1<<nl;
		}
	}
}


