#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,t;
    cin>>n>>t;
    vector<int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int cnt =0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(num[i]>t && num[i-1]>t){
            cnt++;
        }else{
            cnt=1;
        }
        ans = max(ans, cnt);
    }
    cout<<ans;
    return 0;
}