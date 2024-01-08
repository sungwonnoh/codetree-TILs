#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[100], b[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    bool isSame = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
                isSame=true;
            }
        }
    }
    if(isSame==true){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}