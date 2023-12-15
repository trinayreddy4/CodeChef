#include <iostream>
#include <set>

using namespace std;

void sieveOfEratosthenes(set<int>& primes) {
    for (int p = 2; p <= 1000000; p += 2) {
        primes.insert(p);
    }

    for (int p : primes) {
        for (int i = 2 * p; i <= 1000000; i += p) {
            primes.erase(i);
        }
    }
}

int minMoves(int H) {
    if (H == 1) {
        return 0;
    }

    set<int> primes;
    sieveOfEratosthenes(primes);

    int p = 0;
    for (auto it = primes.rbegin(); it != primes.rend() && *it <= H; ++it) {
        p = *it;
    }

    H -= p;

    int moves = 0;
    while (H > 0) {
        H >>= 1;
        moves++;
    }

    return moves + 1;
}

int main() {
    int H;
    cin >> H;

    int moves = minMoves(H);

    if (moves == -1) {
        cout << -1 << endl;
    } else {
        cout << moves << endl;
    }

    return 0;
}

