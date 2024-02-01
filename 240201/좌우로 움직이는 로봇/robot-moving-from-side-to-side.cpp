#include <iostream>
using namespace std;
int a[1000000]={};
int b[1000000]={};
int main() {
    int n,m;
    int cnt=0;
    cin>>n>>m;
    int t, ta=1, tb=1;
    char d;
    for(int i=0;i<n;i++){
        cin>>t>>d;
        for(int j=0;j<t;j++){
            if(d=='L'){
                a[ta]=a[ta-1]-1;
            }else{
                a[ta]=a[ta-1]+1;
            }
            ta++;
        }
    }
    for(int i=0;i<m;i++){
        cin>>t>>d;
        for(int j=0;j<t;j++){
            if(d=='L'){
                b[tb]=b[tb-1]-1;
            }else{
                b[tb]=b[tb-1]+1;
            }
            tb++;
        }
    }
    if(ta<tb){
        for(int i=ta;i<tb;i++){
            a[i]=a[i-1];
        }
    }else if(ta>tb){
        for(int i=tb;i<ta;i++){
            b[i]=b[i-1];
        }
    }
    int time=max(ta,tb);
    for(int i=1;i<time;i++){
        if(a[i]==b[i]&&a[i-1]!=b[i-1]){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}