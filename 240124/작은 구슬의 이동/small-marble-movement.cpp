#include <iostream>
using namespace std;
bool inRange(int x, int y, int n){
    return x>=0 && x<n && y>=0 && y<n;
}
int main() {
    int n,t,r,c;
    cin>>n>>t;
    char d;
    cin>>r>>c>>d;
    int dx[4]={0,1,-1,0};
    int dy[4]={1,0,0,-1};

    int dir;
    if(d=='U'){
        dir=2;
    }else if(d=='D'){
        dir=1;
    }else if(d=='R'){
        dir=0;
    }else{
        dir=3;
    }

    int nx, ny;
    while(t--){
        nx=r-1+dx[dir];
        ny=c-1+dy[dir];
        if(!inRange(nx, ny,n)){
            dir = 3-dir;
        }else{
            r+=dx[dir];
            c+=dy[dir];
        }

    }
    cout<<r<<" "<<c;
    return 0;
}