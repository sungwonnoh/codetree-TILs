#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n][n];
    int a=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j] = a;
            a+=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<< endl;
    }
    return 0;
}