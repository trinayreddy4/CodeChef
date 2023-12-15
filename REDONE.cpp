#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define yes ou<<"YES"<<nl;
#define no ou<<"NO"<<nl;
#define mod 1000000007
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
	 ll a[1000001];
    for(int i=1;i<1000001;i++){
        a[i]=(a[i-1]+i+(i*a[i-1]))%mod;
    }
    while (t--){
        ll n;
        cin>>n;
        cout<<a[n]<< "\n";
    }
}



