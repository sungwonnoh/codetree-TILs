#include <iostream>
#include <string>
using namespace std;
class Info{
    public:
    string s;
    char c;
    int n;
};
int main() {
    Info info;
    cin>>info.s>>info.c>>info.n;

    cout<<"code : "<<info.s<<endl;
    cout<<"color : "<<info.c<<endl;
    cout<<"second : "<<info.n;
    return 0;
}