#include <iostream>
using namespace std;

int F(int n){
    int cnt = 0;
    while(n>1){
        if(n%2==0){
            n/=2;
            cnt++;
        }else{
            n/=3;
            cnt++;
        }
        if(n==1){
            break;
        }
    }
    return cnt;
}
int main() {
    int n;
    cin>>n;
    cout<<F(n);
    return 0;
}