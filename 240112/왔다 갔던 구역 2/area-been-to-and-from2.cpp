#include <iostream>
using namespace std;

int main() {
    int n, x;
    int arr[2001] = {};
    char c;
    cin >> n;

    int now = 1000;

    for (int i = 0; i < n; i++) {
        cin >> x >> c;

        if (c == 'L') {
            int start = max(now - x, 0);
            int end = min(now, 2000);
            for (int j = start; j < end; j++) {
                arr[j]++;
            }
            now -= x;
        } else if (c == 'R') {
            int start = max(now, 0);
            int end = min(now + x, 2000);
            for (int j = start; j < end; j++) {
                arr[j]++;
            }
            now += x;
        }
    }

    int cnt = 0;
    for (int i = 0; i < 2001; i++) {
        if (arr[i] >= 2) {
            cnt += 1;
        }
    }

    cout << cnt;
    return 0;
}