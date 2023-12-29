#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin>>s;
    cout<<s<<endl;
    int n=s.length();
    for(int i=0;i<n;i++){
        s = s.substr(n-1,1) + s.substr(0,n-1);
        cout<<s<<endl;
    }
    return 0;
}