#include <iostream>
using namespace std;

void distinction(int a,int b){
    int result;
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(i%2==0){
            cnt++;
        }else if(i%3==0&&i%9!=0){
            cnt++;
        }else if(i>10){
            if(i%10==5){
                cnt++;
            }
        }else if(i==5){
            cnt++;
        }
    }
    cout<<(b-a+1) - cnt;
}
int main() {
    int a,b;
    cin>>a>>b;
    distinction(a,b);
    return 0;
}