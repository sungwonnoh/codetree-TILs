#include <iostream>
#include <string>
using namespace std;
class Name{
    public:
        string name;
        int n;
        Name(string name="", int n=0){
            this->name = name;
            this->n = n;
        }
};
int main() {
    Name first = Name("codetree", 10);
    cout<<"user " <<first.name<<" lv "<<first.n <<endl;

    Name second = Name();
    cin>>second.name>>second.n;
    cout<<"user " <<second.name<<" lv "<<second.n <<endl;
    return 0;
}