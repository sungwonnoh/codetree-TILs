#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    int n;
    cin>>str;
    cin>>n;
    for(int i=str.length() -1;i>=(str.length()-n);i--){
        cout<<str[i];
    }
    return 0;
}