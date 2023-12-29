#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, someStr;
    bool exist = false;
    int num;
    cin>>str>>someStr;
    for(int i=0;i<str.length();i++){
        if(str.substr(i,someStr.length()) == someStr){
            exist = true;
            num = i;
            break;
        }
    }
    if(exist == true){
        cout<<num;
    }else{
        cout<<"-1";
    }
    return 0;
}