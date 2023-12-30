#include <iostream>
#include <string>
using namespace std;
int main() {
    string s[200];
    int cnt=0;
    for(int i=0;i<200;i++){
        cin>>s[i];
        if(s[i]=="0"){
            cnt =i;
            break; 
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++){
        if(i%2==0){
            cout<<s[i]<<endl;
        }
    }
    return 0;
}