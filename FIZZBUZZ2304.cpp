#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--){
        int N, K;
        cin >> N>>K;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
		
		int count = 0;
    int n = A.size();

    for(int i=0;i<n-K+1;i++)
    {
    	for(int j=0;j<K;j++)
    	{
    		if(A[i+j]%2!=0)
    		{
    			count++;
    			break;
			}
		}
	}
        cout <<count<< endl;
    }

    return 0;
}

