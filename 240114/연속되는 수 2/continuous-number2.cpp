#include <iostream>
using namespace std;
int main() {
    int n,num[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(i==0||num[i]!=num[i-1]){
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}