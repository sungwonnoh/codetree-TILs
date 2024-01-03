#include <iostream>
using namespace std;

int sum(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    return sum(n-2) + n;
}
int main() {
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}