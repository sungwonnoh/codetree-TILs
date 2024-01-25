#include <iostream>
using namespace std;

int n;    
bool inRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
    cin >> n;
    int arr[100][100] = {};
    int dx[4] = {0, -1, 0, 1};
    int dy[4] = {1, 0, -1, 0};

    int x = n/2, y = n/2;
    int now = 0; 
    int cnt = 1; //이동할 횟수
    int num = 1; 

    while (num <= n * n) {
        for (int i = 0; i < cnt; i++) {
            if (inRange(x, y)) {
                arr[x][y] = num;
                num++;
            }
            x += dx[now];
            y += dy[now];
        }
        now = (now + 1) % 4;
        if (now % 2 == 0) {
            cnt++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}