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
        cin>>n;
        string b[n];
        int a=0,bl=0,ab=0,o=0;
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]=="A"){
                a++;
            }
            else if(b[i]=="B"){
                bl++;
            }else if(b[i]=="O"){
                o++;
            }else{
                ab++;
            }
            
        }
        int c=o;
        if(a>bl){
            c=a+ab+c;
        }else{
            c=c+bl+ab;
        }
        cout<<c<<endl;
	}
}



