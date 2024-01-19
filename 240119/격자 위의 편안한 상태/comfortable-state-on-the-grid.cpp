#include <iostream>
using namespace std;

bool inRange(int x, int y, int n) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
    int n, m, r, c;
    cin >> n >> m;
    int arr[n][n] = {};
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    int cnt = 0, nx, ny;

    for (int i = 0; i < m; i++) {
        cin >> r >> c;
        arr[r - 1][c - 1] = 1;

        for (int j = 0; j < 4; j++) {
            nx = r - 1 + dx[j];
            ny = c - 1 + dy[j];
            if (inRange(nx, ny, n) && arr[nx][ny] == 1) {
                cnt++;
            }
        }

        if (cnt == 3) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
        cnt = 0;
    }

    return 0;
}