#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int arr[100]={0};
    int a,b;
    for(int i=0;i<k;i++){
        cin>>a>>b;
        for(int j=a;j<=b;j++){
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