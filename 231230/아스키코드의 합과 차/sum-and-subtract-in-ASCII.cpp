#include <iostream>
#include <string>
using namespace std;

int main() {
    char a,b;
    cin>>a>>b;
    int na = (int)a;
    int nb = (int)b;
    int num;
    if(na>=nb){
        num = na-nb;
    }else{
        num = nb - na;
    }
    cout<<na+nb<<" "<<num;
    return 0;
}