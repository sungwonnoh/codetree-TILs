#include <iostream>
using namespace std;
int strange(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    return strange(n/3) + strange(n-1);
}
int main() {
    int n;
    cin>>n;
    cout<<strange(n);
    return 0;
}