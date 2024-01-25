#include <iostream>
#include <string>
using namespace std;

int n,t;
int arr[100][100]={};
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
bool inRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
    cin>>n>>t;
    string s;
    cin>>s;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int now=0;
    int x=n/2;
    int y=n/2;
    int cnt = arr[x][y];

    for(int i=0;i<t;i++){
        if(s[i]=='R'){
            now=(now-1+4)%4;
        }else if(s[i]=='L'){
            now=(now+1)%4;
        }else{
            int nx=x+dx[now];
            int ny=y+dy[now];
            if (inRange(nx, ny)){
                x+=dx[now];
                y+=dy[now];
                cnt+=arr[x][y];
            }
        }
    }
    cout<<cnt;
    return 0;
}