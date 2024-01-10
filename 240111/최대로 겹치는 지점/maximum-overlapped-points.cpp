#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[100]={};
    int x1[100],x2[100];
    for(int i=0;i<n;i++){
        cin>>x1[i]>>x2[i];
    }
    for(int i=0;i<n;i++){
        for(int j=x1[i];j<=x2[i];j++){
            arr[j]++;
        }
    }
    int maxnum = arr[0];
    for(int i=0;i<100;i++){
        maxnum = max(maxnum, arr[i]);
    }
    cout<<maxnum;
    return 0;
}