#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i] = toupper(s[i]);
        }
    }
    for(int i=0; i<s.length(); i++){
        if(s[i]>='A'&&s[i]<='Z'){
            cout<<s[i];
        }
    }
    return 0;
}