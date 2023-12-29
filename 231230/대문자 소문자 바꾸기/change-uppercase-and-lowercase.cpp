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
        }else if(s[i]>='A' && s[i]<='Z'){
            s[i] = tolower(s[i]);
        }
    }
    cout<<s;
    return 0;
}