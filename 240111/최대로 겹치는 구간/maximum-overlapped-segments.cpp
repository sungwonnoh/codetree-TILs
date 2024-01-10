#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x1,x2;
    int arr[100]={};
    for(int i=0;i<n;i++){
        cin>>x1>>x2;
        for(int j=x1;j<x2;j++){
            arr[j]++;
        }
    }
    int maxnum=arr[0];
    for(int i=0;i<100;i++){
        maxnum= max(maxnum,arr[i]);
    }
    cout<<maxnum;
    return 0;
}