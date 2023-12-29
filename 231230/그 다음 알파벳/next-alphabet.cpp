#include <iostream>
#include <string>
using namespace std;
int main() {
    char c;
    int temp;
    cin>>c;
    if(c>='a'&&c<'z'){
        temp = (int)c + 1;
        cout<< (char)temp;
    }else if(c=='z'){
        cout<<'a';
    }
    return 0;
}