#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int a=0;

    
    for(int i=0;i<m;i++){
        if(i%2==0){//짝수 번째
            for(int j=0;j<n;j++){
                arr[j][i] = a;
                a+=1;
            }
        }else{
            for(int j=n-1;j>=0;j--){
                arr[j][i] = a;
                a+=1;
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