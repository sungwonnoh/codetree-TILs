#include <iostream>
using namespace std;
int n,m;
bool inRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < m;
};
int main() {
    cin>>n>>m;
    int arr[101][101]={};
    int dx[4]={1,0,-1,0};
    int dy[4]={0,1,0,-1};
    int x=0,y=0, now=0;
    arr[x][y]=1;
    
    for(int i=1;i<=n*m;){
        int nx= x+dx[now];
        int ny= y+dy[now];
        if(!inRange(nx, ny)||arr[nx][ny]!=0){
            now = (now+1) %4;
        }
        i++;
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