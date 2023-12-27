#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n][n]={};
    int a=1;
    for(int i=0;i<n;i++){
        if(i%2!=0){
            for(int j=0;j<n;j++){
                arr[i][j]=a;
                a+=1;
            }
        }else{
            for(int j=n-1;j>=0;j--){
                arr[i][j]=a;
                a+=1;
            }
        }
    }
    for(int j=0;j<n;j++){
        for(int i=n-1;i>=0;i--){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}