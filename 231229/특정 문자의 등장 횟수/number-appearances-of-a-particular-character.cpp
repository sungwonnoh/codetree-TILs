#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin>>str;
    int cnt1=0,cnt2=0;
    for(int i=0;i<str.length();i++){
        if(str.substr(i,2)=="ee"){
            cnt1+=1;
        }else if(str.substr(i,2)=="eb"){
            cnt2+=1;
        }
    }
    cout<<cnt1<<" "<<cnt2;
    return 0;
}