#include <iostream>
using namespace std;
int main() {
    int arr[201][201]={};
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        x+=100;
        y+=100;
        for(int j=x;j<x+8;j++){
            for(int k=y;k<y+8;k++){
                arr[j][k] =1;
            }
        }
    }
    int cnt =0;
    for(int i=0;i<=200;i++){
        for(int j=0;j<=200;j++){
            if(arr[i][j]>0){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}