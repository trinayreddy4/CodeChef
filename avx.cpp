#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int MAXN = 1005; // Maximum grid size

int grid[MAXN][MAXN];
int infected[MAXN][MAXN];
int vaccinated[MAXN][MAXN];
int N, M; // Grid dimensions

// Define movements for up, down, left, and right
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

struct Cell {
    int x, y;
};

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        cin >> N >> M;
        int x, y; // Initially infected cell
        cin >> x >> y;

        queue<Cell> q;
        q.push({x, y});
        infected[x][y] = 1; // Mark the initially infected cell

        int vaccinations = 0;

        while (!q.empty()) {
            Cell current = q.front();
            q.pop();

            for (int i = 0; i < 4; i++) {
                int nx = current.x + dx[i];
                int ny = current.y + dy[i];

                if (nx >= 1 && nx <= N && ny >= 1 && ny <= M) {
                    if (!infected[nx][ny] && !vaccinated[nx][ny]) {
                        infected[nx][ny] = 1;
                        q.push({nx, ny});
                    }
                }
            }
        }

        // Iterate through the grid to vaccinate adjacent uninfected cells
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= M; j++) {
                if (!infected[i][j]) {
                    for (int k = 0; k < 4; k++) {
                        int nx = i + dx[k];
                        int ny = j + dy[k];

                        if (nx >= 1 && nx <= N && ny >= 1 && ny <= M && vaccinated[nx][ny]) {
                            vaccinated[i][j] = 1;
                            vaccinations++;
                            break;
                        }
                    }
                }
            }
        }

        cout <<vaccinations << endl;

        // Clear data structures for the next test case
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= M; j++) {
                infected[i][j] = 0;
                vaccinated[i][j] = 0;
            }
        }
    }

    return 0;
}

