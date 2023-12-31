#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}
int lcm(int a,int b){
    return (a*b) / gcd(a,b);
}
int main() {
    int n;
    cin>>n;
    int num[10];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int result = num[0];
    for(int i=1;i<n;i++){
        result = lcm(result,num[i]);
    }
    cout<<result;
    return 0;
}