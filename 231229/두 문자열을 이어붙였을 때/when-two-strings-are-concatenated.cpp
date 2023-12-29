#include <iostream>
#include <string>
using namespace std;
int main() {
    string A,B;
    cin>>A;
    cin>>B;
    string newA, newB;
    newA = A+B;
    newB = B+A;
    if(newA==newB){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}