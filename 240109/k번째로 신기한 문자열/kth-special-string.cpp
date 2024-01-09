#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n,k;
    string t;
    cin>>n>>k>>t;

    string arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(arr[i].compare(0,t.length(),t)==0){
            cnt++;
        }
    }
    int kpoint =0;
    for(int i=0;i<n;i++){
        if(arr[i].compare(0,t.length(),t)==0){
            if(cnt == k){
                kpoint = i;
                break;
            }
            cnt++;
        }
    }
    cout<<arr[kpoint];
    return 0;
}