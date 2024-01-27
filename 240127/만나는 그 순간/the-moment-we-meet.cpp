#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int a[1000001]={};
    int b[1000001]={};
    char c;
    int posA=0, posB=0;
    int timeA=1, timeB=1;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>c>>posA;
        while(posA--){
            if(c=='L'){
                a[timeA]=a[timeA-1]-1;
            }else{
                a[timeA]=a[timeA-1]+1;
            }
            timeA++;
        }
    }
    for(int i=0;i<m;i++){
        cin>>c>>posB;
        while(posB--){
            if(c=='L'){
                b[timeB]=b[timeB-1]-1;
            }else{
                b[timeB]=b[timeB-1]+1;
            }
            timeB++;
        }
    }
    
    for(int i=1;i<timeA;i++){
        if(a[i]==b[i]){
            ans=i;
            break;
        }
    }
    cout<< ans;
    return 0;
}