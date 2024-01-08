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

    bool isSame = true;
    for(int i=0;i<n;i++){
        bool found = false;
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
                found = true;
                break;
            }
        }
        if(!found){
        isSame = false;
        break;
        }
    }
    
    if(isSame==true){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}