#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[100][100];
    int dx[4]={0,1,0,-1}, dy[4]={1,0,-1,0};
    int cnt=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int near=0;{
                for(int k=0;k<4;k++){
                    int x=i+dx[k];
                    int y=i+dy[k];
                    if(x>=0&&x<n &&y>=0&&y<n&&arr[x][y]==1){
                        near++;
                    }
                }
                if(near>=3){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt/2;
    return 0;
}