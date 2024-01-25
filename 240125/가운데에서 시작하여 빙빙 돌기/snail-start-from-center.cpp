#include <iostream>
using namespace std;
int n;    
bool inRange(int x, int y){
    return x>=0&&x<n && y>=0&&y<n;
}

int main() {
    cin>>n;
    int x=n/2,y=n/2,now=0;
    int arr[100][100]={};
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    arr[x][y]=1;

    for(int i=1;i<=n*n;i++){
        arr[x][y]=i;
        int nx = x + dx[now];
        int ny = y + dy[now];
        if (!inRange(nx, ny) || arr[nx][ny] != 0) {
            now = (now -1+4) % 4;  
        }
        x+=dx[now];
        y+=dy[now];
            
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}