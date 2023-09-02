#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // your code goes here
    int t,n;
    for(cin>>t;t--;){
        string A,B;
        cin>>n>>A>>B;
        unordered_set<char> s;
        for(int i=0;i<n;++i)
            if(A[i]!=B[i])
                s.insert(B[i]);
        cout<<s.size()<<endl;
    }
    return 0;
}
