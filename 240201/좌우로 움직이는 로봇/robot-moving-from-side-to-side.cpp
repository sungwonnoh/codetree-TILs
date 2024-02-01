#include <iostream>
using namespace std;
int a[10000]={};
int b[10000]={};
int main() {
    int n,m;
    int cnt=0;
    cin>>n>>m;
    int t, ta=1, tb=1;
    char d;
    for(int i=0;i<n;i++){
        cin>>t>>d;
        while(t--){
            if(d=='L'){
                a[++ta]=a[ta-1]-1;
            }else{
                a[++ta]=a[ta-1]+1;
            }
        }
    }
    for(int i=0;i<m;i++){
        cin>>t>>d;
        while(t--){
            if(d=='L'){
                b[++tb]=b[tb-1]-1;
            }else{
                b[++tb]=b[tb-1]+1;
            }
        }
    }
    int time=min(ta,tb);
    for(int i=1;i<=time;i++){
        if(a[i]==b[i]){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}