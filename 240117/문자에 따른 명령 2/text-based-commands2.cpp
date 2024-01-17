#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin>>s;
    int x=0, y=0;
    int dir=3;
    int dx[4]={1,0,-1,0}, dy[4]={0,-1,0,1};
    for(int i=0;i<s.length();i++){
        if(s[i]=='L'){
            dir=(dir-1+4)%4;
            /*
            if(dir==0){
                dir=3;
            }else if(dir==1){
                dir=0;
            }else if(dir==2){
                dir=1;
            }else{
                dir=2;
            }*/
        }else if(s[i]=='R'){
            /*
            if(dir==0){
                dir=1;
            }else if(dir==1){
                dir=2;
            }else if(dir==2){
                dir=3;
            }else{
                dir=0;
            }*/
            dir=(dir-1)%4;
        }else{
            x+=dx[dir], y+=dy[dir];
        }
    }
    
    cout<<x<<" "<<y;
    return 0;
}