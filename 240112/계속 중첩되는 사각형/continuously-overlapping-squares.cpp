#include <iostream>
using namespace std;
int main() {
    int arr[201][201]={};
    int n;
    cin>>n;
    int x1,x2,y1,y2;
    for(int i=0;i<n;i++){
        cin>>x1>>y1>>x2>>y2;
        x1+=100;
        y1+=100;
        x2+=100;
        y2+=100;
        for(int j=x1;j<x2;j++){
            for(int k=y1;k<y2;k++){
                arr[j][k] =i%2;
            }
        }
    }

    int cnt=0;
    for(int i=0;i<=200;i++){
        for(int j=0;j<=200;j++){
            if(arr[i][j]==1){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}