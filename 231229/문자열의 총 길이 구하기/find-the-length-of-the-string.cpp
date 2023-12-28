#include <iostream>
#include <string>
using namespace std;
int main() {
    string arr[10], newstr;
    int length=0;
    for(int i=0;i<10;i++){
        getline(cin, arr[i]);
        newstr="";
        for(char c: arr[i]){
            if(c!=' '){
                newstr += c;
            }
        }
        length += newstr.length();
    }
    cout<<length;
    return 0;
}