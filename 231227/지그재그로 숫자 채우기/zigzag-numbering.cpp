#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int a=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j] = a;
            a+=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j%2==0){ //짝수 번째 
                cout<<arr[j][i]<<" ";
            }else{
                cout<<arr[j][n-i+1]<<" ";
            }
        }
        cout<< endl;
    }
    return 0;
}