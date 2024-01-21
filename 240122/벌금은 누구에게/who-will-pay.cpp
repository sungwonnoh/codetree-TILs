#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,m,k;
    int idx=-1;
    cin>>n>>m>>k;
    vector<int> s(n+1);
    for(int i=0;i<m;i++){
        int num;
        cin>>num;
        s[num]++;
    }
    for(int i=1;i<=n;i++){
        if(s[i]>=k){
            idx=i;
            break;
        }
    }
    cout<<idx;
    return 0;
}