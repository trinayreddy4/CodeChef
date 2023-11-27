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
void reverse(vector<int>&arr,int start,int end)
{
	while(start<=end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}
int main()
{
    fastread();
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		in>>n>>m;
		
		vi a(n);
		
		for(auto &i:a)
		in>>i;
		
		reverse(a,m,a.size()-1);
		
		for(auto i:a)
		ou<<i<<" ";
	}
}



