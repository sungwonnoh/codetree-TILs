#include <iostream>
using namespace std;
bool inRange(int x, int y, int n, int m){
    return x>=0&&x<n && y>=0&&y<m;
}
int main() {
    int n,m;
    cin>>n>>m;
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    int arr[100][100];
    int x=0,y=0, now=0;
    arr[x][y]=1;
    for(int i=2;i<=n*m;i++){
        int nx= x+dx[now];
        int ny= y+dy[now];
        if(arr[nx][ny]!=0 || !inRange(nx, ny,n,m)){
            now = (now+1) %4;
        }
        x+=dx[now];
        y+=dy[now];
        arr[x][y]=i;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}