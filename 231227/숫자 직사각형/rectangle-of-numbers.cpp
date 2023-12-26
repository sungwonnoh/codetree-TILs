#include <iostream>
using namespace std;
int main() {
    int n,m;
    int num=1;
    cin >>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j] = num;
            num += 1;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}