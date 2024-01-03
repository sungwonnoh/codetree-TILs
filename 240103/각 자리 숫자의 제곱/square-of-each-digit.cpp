#include <iostream>
using namespace std;
int doublesum(int n){
    if(n==0){
        return 0;
    }
    return doublesum(n/10) + (n % 10)*(n % 10);
}
int main() {
    int n;
    cin>>n;
    cout<< doublesum(n);
    return 0;
}