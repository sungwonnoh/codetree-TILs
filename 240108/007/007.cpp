#include <iostream>
#include <string>
using namespace std;
class Code{
    public:
        string code;
        char c;
        int h;
};
int main() {
    Code mycode;
    cin>>mycode.code>>mycode.c>>mycode.h;
    cout<<"secret code : " << mycode.code<<endl;
    cout<< "meeting point : "<< mycode.c<<endl;
    cout<< "time : " <<mycode.h ;
    return 0;
}