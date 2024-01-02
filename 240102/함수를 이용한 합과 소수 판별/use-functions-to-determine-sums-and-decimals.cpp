#include <iostream>
using namespace std;
bool isPrime(int num){
    if(num<2){
        return false;
    }
    for(int j=2;j*j<=num;j++){
        if(num%j==0){
            return false;
        }
    }
    return true;    
}

void countPrime(int a,int b){
    int cnt = 0;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            int result =0;
            int num = i;
            while(num>0){
                result += num % 10;
                num /= 10;
            }
            if(result % 2 ==0){
                cnt++;
            }
        }
    }
    cout<<cnt;
}
int main() {
    int a,b;
    cin>>a>>b;
    countPrime(a,b);
    return 0;
}