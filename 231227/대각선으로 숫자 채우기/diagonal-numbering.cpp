#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int a=1;
    int arr[n][m];

    for(int c=0;c<n+m;c++){ //대각선 인덱스합
       for (int i = 0; i < n; i++) {
            for (int j = 0; j <m; j++) {
                if (c==i+j) {
                    arr[i][j] = a;
                    a++;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}