#include <iostream>
using namespace std;

int main() {
    int n,num;
    cin>>n;
    int x=0, y=0;
    char d;
    int dx[4]={1,-1,0,0}, dy[4]={0,0,-1,1};//동서남북
    for(int i=0;i<n;i++){
        cin>>d>>num;
        if(d=='E'){
            x+=dx[0]*num, y+=dy[0]*num;
        }else if(d=='W'){
            x+=dx[1]*num, y+=dy[1]*num;
        }else if(d=='S'){
            x+=dx[2]*num, y+=dy[2]*num;
        }else{
            x+=dx[3]*num, y+=dy[3]*num;
        }
    }
    cout<<x<<" "<<y;
    return 0;
}