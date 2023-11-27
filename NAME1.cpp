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
		string a,b;
		in>>a>>b;
		a=a+b;
		map<char,int>mp;
		
		for(int i=0;i<a.length();i++)
		{
			mp[a[i]]++;
		}
		int n;
		in>>n;
		string temp="";
		for(int i=0;i<n;i++)
		{
			string t;
			in>>t;
			temp+=t;
		}
		map<char,int>m;
		int i;
		for(i=0;i<temp.length();i++)
		{
			m[temp[i]]++;
			
			if(m[temp[i]]>mp[temp[i]])
			{
				break;
			}
		}
		
		if(i==temp.length())
		{
			yes
		}
		else
		{
			no
		}
	}
}



