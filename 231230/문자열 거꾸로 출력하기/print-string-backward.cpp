#include <iostream>
#include <string>
using namespace std;
int main() {
    string s[10];
    int cnt =0;
    for(int i=0;i<10;i++){
        cin>>s[i];
        if(s[i]=="END"){
            cnt=i;
            break;
        }
    }
    for(int i=0;i<cnt;i++){
        for(int j=s[i].length()-1;j>=0;j--){
            cout<<s[i][j];
        }
        cout<<endl;
    }
    return 0;
}