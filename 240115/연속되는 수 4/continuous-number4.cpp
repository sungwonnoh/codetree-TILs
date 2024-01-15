#include <iostream>
using namespace std;
int main() {
    int n,num;
    cin>>n;
    int result=0;
    int cnt=0;
    int next=0;

    for(int i=0;i<n;i++){
        cin>>num;
        if(num>next){
            cnt++;
        }else{
            cnt=1;
        }
        result = max(cnt, result);
        next = num;
    }
    cout<<result;
    return 0;
}