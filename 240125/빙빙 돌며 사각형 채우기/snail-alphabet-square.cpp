#include <iostream>
using namespace std;
int n,m;
bool inRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < m;
};
int main() {
    cin>>n>>m;
    char arr[100][100]={};

    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    int x=0,y=0, now=0;
    arr[x][y]='A';
    char c='B';

    for(int i=1;i<n*m;i++){
        int nx= x+dx[now];
        int ny= y+dy[now];
        if(arr[nx][ny]!=0 || !inRange(nx, ny)){
            now = (now+1) %4;
        }
        x+=dx[now];
        y+=dy[now];
        arr[x][y]=c++;
        if(c>'Z'){
            c='A';
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}