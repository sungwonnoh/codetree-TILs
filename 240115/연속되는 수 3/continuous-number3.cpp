#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    int cnt=0, answer=0;
    cin>>n;
    vector<int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    for(int i=0;i<n;i++){
        if(i>0&&num[i]*num[i-1]>0){
            cnt+=1;
        }else{
            cnt=1;
        }
        answer = max(answer, cnt);
    }
    cout<<answer;
    return 0;
}