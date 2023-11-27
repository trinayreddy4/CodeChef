#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int minDaysToConquerIsland(vector<int>& territories, int N) {
    unordered_map<int, int> left, right;
    
    for (int i = 0; i < N; ++i) {
        if (left.find(territories[i]) == left.end()) {
            left[territories[i]] = i;
        }
        right[territories[i]] = i;
    }
    
    int minDays = N, minClan = 1;
    
    for (auto const& clan : left) {
        int days = max(right[clan.first] - left[clan.first] + 1, 1);
        if (days < minDays) {
            minDays = days;
            minClan = clan.first;
        }
    }
    
    return minClan;
}

int main() {
    int N;
    cout << "Enter the number of territories: ";
    cin >> N;

    vector<int> territories(N);
    cout << "Enter the clans ruling each territory: ";
    for (int i = 0; i < N; ++i) {
        cin >> territories[i];
    }

    int chosenClan = minDaysToConquerIsland(territories, N);

    cout << "Minimum time required: " << (chosenClan == 1 ? 1 : chosenClan) << endl;
    cout << "Clan to bestow with powers: " << chosenClan << endl;

    return 0;
}

