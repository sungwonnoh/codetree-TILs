#include <iostream>
using namespace std;

int main() {
    int n, s;
    char d;
    int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, -1, 1};
    int cnt = 0, x = 0, y = 0, dir = 0;
    int answer = -1;
    
    cin >> n;
    cin.ignore(); 

    for (int i = 0; i < n; i++) {
        cin >> d >> s;
        cin.ignore();

        if (d == 'E') {
            dir = 0;
        } else if (d == 'W') {
            dir = 1;
        } else if (d == 'S') {
            dir = 2;
        } else {
            dir = 3;
        }
        
        for (int j = 0; j < s; j++) {
            x += dx[dir];
            y += dy[dir];
            cnt++;

            if (x == 0 && y == 0) {
                answer = cnt;
                break;
            }
        }

        if (answer != -1) {
            break;
        }
    }

    cout << answer;

    return 0;
}