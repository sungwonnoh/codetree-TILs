#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    for(int i=0;i<str1.length();i++){
        if(str1[i]==' '){
            str1.erase(i,1);
        }
    }
    for(int i=0;i<str2.length();i++){
        if(str2[i]==' '){
            str2.erase(i,1);
        }
    }
    cout<<str1<<str2;
    return 0;
}