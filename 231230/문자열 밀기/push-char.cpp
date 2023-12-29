#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin>>s;
    s = s.substr(1)+s[0];
    cout<<s;
    return 0;
}