#include <iostream>
using namespace std;
void printstar(int n){
    for(int i=0;i<n;i++){
        for(int j=n-i;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    printstar(n);
    return 0;
}