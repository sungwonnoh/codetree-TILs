#include <iostream>
using namespace std;

int main() {
    int n;
    int binary[1000]={};
    int cnt=0;
    cin>>n;

    while(true){
        if(n<2){
            binary[cnt++]=n;
            break;
        }else{
            binary[cnt++] = n%2;
            n/=2;
        }
    }

    for(int i=cnt-1;i>=0;i--){
        cout<<binary[i];
    }
    return 0;
}