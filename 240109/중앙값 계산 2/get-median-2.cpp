#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,idx;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i%2==0){
            sort(arr,arr+i);
            idx = i/2;
            cout<<arr[idx]<<" ";
        }
    }
    

    return 0;
}