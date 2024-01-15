#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int cnt=0,answer=0;
    for(int i=0;i<n;i++){
        if(num[i]==num[i-1]){
            cnt++;
        }else{
            cnt=1;
        }
        answer = max(answer,cnt);
    }
    cout<<answer;

    return 0;
}