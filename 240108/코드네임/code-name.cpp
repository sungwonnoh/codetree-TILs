#include <iostream>
using namespace std;
class CodeName{
    public:
        char c;
        int s;
        CodeName(char c=0, int s =0){
            this->c=c;
            this->s=s;
        }
};
int main() {
    CodeName codename[5];
    for(int i=0;i<5;i++){
        cin>>codename[i].c>>codename[i].s;
    }
    CodeName min = codename[0];

    for(int i=0;i<5;i++){
        if(min.s> codename[i].s){
            min = codename[i];
        }
    }
    cout<< min.c <<" "<<min.s;
    return 0;
}