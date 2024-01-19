#include <iostream>
#include <string>
using namespace std;
int main() {
    string d;
    int dir=3, x=0,y=0;
    int cnt=0, answer=-1;
    int dx[4]={1,0,-1,0}, dy[4]={0,-1,0,1};

    cin>>d;
    for(int i=0;i<d.length();i++){
        cnt++;
        if(d[i]=='L'){
            dir=(dir-1+4)%4;
        }else if(d[i]=='R'){
            dir=(dir+1)%4;
        }else{
            x+=dx[dir], y+=dy[dir];
        }

        if(x==0&&y==0){
            answer=cnt;
            break;
        }
    }
    cout<<answer;
    return 0;
}