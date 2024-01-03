#include <iostream>
using namespace std;
void upanddown(int n){
    if(n==0){
        return;
    }
    for(int i=n;i>=1;i--){
        cout<<i<<" ";
    }
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
}
int main() {
    int n;
    cin>>n;
    upanddown(n);

    return 0;
}