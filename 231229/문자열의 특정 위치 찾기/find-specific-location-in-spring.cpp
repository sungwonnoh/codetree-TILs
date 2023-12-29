#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char c;
    bool isRight = false;
    int num;
    cin>>str>>c;
    for(int i=0;i<str.length();i++){
        if(str[i]==c){
            isRight = true;
            num = i;
            break;
        }
    }

    if(isRight == true){
        cout<<num;
    }else{
        cout<<"No";
    }
    return 0;
}