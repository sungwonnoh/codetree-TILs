#include <iostream>
using namespace std;
int main() {
    int n,x[100];
    int arr[21]={};
    char c;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>x[i]>>c;

        if(c=='L'){
            for(int j=0;j<x[i];j++){
                arr[10-j]++;
            }
        }else if(c=='R'){
            for(int j=0;j<x[i];j++){
                arr[10+j]++;
            }
        }
    }
    int cnt=0;
    for(int i=0;i<21;i++){
        cnt = max(cnt, arr[i]);
    }
    cout<<cnt;
    return 0;
}