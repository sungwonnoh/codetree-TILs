#include <iostream>
using namespace std;
int main() {
    int n,sum=0;
    cin>>n;
    while(true){
        if(n==1){
            break;
        }
        if(n%2==0){
            n=n/2;
            sum +=1;
        }else{
            n=n*3+1;
            sum+=1;
        }
    }
    cout<< sum;
    return 0;
}