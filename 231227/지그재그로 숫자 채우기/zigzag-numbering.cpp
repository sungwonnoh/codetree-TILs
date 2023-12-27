#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int a=0;
    /*
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j] = a;
            a+=1;
        }
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }*/

    
    for(int i=0;i<n;i++){
        if(i%2==0){//짝수 번째
            for(int j=0;j<m;j++){
                arr[i][j] = a;
                a+=1;
            }
        }else{
            for(int j=m-1;j>=0;j--){
                arr[i][j] = a;
                a+=1;
            }
        }
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}