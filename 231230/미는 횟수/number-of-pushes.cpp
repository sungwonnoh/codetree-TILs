#include <iostream>
#include <string>
using namespace std;
int main() {
    string a,b;
    cin>>a>>b;
    int cnt = 0;
    for(int i=0;i<a.length();i++){
        a= a.substr(a.length()-1,1) + a.substr(0,a.length()-1);
        if(a==b){
            cnt = i+1;
            break;
        }else{
            cnt = -1;
        }
    }
    cout<<cnt;
    return 0;
}