#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int av[1001],at[1001],bv[1001],bt[1001];
    for(int i=0;i<n;i++){
        cin>>av[i]>>at[i];
    }
    for(int i=0;i<m;i++){
        cin>>bv[i]>>bt[i];
    }
    int a[1001], b[1001];
    int ai=0, bi=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<at[i];j++){
            a[ai++]=av[i]+a[ai-1];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            a[bi++]=bv[i]+b[ai-1];
        }
    }
    return 0;
}