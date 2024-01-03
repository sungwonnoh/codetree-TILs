#include <iostream>
using namespace std;

int sumN(int n){
    if(n==1){
        return 1;
    }
    int sum =0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    return sum;
}
int main() {
    int n;
    cin>>n;
    cout<< sumN(n);
    return 0;
}