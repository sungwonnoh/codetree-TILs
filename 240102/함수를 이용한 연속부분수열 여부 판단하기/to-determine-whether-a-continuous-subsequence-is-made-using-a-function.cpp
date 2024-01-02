#include <iostream>
using namespace std;

bool isRight(int a[100], int b[100], int n1, int n2){
    int i,j=0;
    while(i<n1&&j<n2){
        if(a[i]==b[j]){
            j++;
        }
        i++;
    }
    return (j==n2);
}
int main() {
    int n1,n2;
    cin>>n1>>n2;
    int a[100],b[100];
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    bool found = false;
    for(int i=0;i<n1;i++){
        if(isRight(a+i,b,n1-i,n2)){
            found = true;
            break;
        }
    }
    if(found){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}