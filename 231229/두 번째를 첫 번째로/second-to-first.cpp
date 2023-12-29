#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin>>s;
    char seconds=s[1];
    char firsts=s[0];
    for(int i=0;i<s.length();i++){
        if(s[i]==seconds){
            s[i]=firsts;
        }
    }
    cout<<s;
    return 0;
}