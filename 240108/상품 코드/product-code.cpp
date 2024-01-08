#include <iostream>
#include <string>
using namespace std;
class Info{
    public:
        string name;
        int code;
        Info(string name="",int code=0){
            this->name= name;
            this->code=code;
        }
};
int main() {
    Info info1= Info("codetree", 50);
    cout<<"product "<<info1.code<<" is "<<info1.name<<endl;
    Info info2 = Info();
    cin>>info2.name>>info2.code;
    cout<<"product "<<info2.code<<" is "<<info2.name;
    
    return 0;
}