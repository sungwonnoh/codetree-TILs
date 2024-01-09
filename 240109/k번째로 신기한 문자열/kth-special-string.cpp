#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n,k;
    string t;
    cin>>n>>k>>t;

    string arr[100]={};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int cnt =0;
    for(int i=0;i<n;i++){
        if(arr[i].compare(0,t.length(),t)==0){
            cnt++;
            if(cnt == k){
                cout<<arr[i];
                break;
            }
        }
    }
    
    return 0;
}