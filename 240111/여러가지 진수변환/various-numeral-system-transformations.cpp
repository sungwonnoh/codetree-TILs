#include <iostream>
using namespace std;

int main() {
    int n,b;
    int change[1000]={};
    int cnt =0;
    cin>>n>>b;
    
    while(true){
        if(b==4){
            if(n<4){
                change[cnt++]=n;
                break;
            }else{
                change[cnt++] = n%b;
                n/=b;
            }
        }else if(b==8){
            if(n<8){
                change[cnt++]=n;
                break;
            }else{
                change[cnt++] = n%b;
                n/=b;
            }
        }
    
    }
    for(int i=cnt-1;i>=0;i--){
        cout<<change[i];
    }
    return 0;
}