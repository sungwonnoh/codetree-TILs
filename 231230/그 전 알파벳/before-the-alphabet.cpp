#include <iostream>
#include <string>
using namespace std;
int main() {
    char c;
    cin>>c;
    int temp;
    if(c>='b'&&c<='z'){
        temp = (int)c -1;
        cout<<(char)temp;
    }else if(c=='a'){
        cout<<'z';
    }
    return 0;
}