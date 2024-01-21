#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> num;
    unordered_map<int, int> countM;

    for (int i = 0; i < m; ++i) {
        int a;
        cin >> a;
        num.push_back(a);
        countM[a]++;

        if (countM[a] >= k) {
            cout << a << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}