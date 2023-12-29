#include <iostream>
#include <string>
using namespace std;

int main() {
    string A,order;
    cin>>A>>order;
    for(int i=0;i<order.length();i++){
        if(order[i]=='L'){
            A = A.substr(1,A.length()-1) + A[0];
        }else if(order[i]=='R'){
            A = A.substr(A.length()-1,1) + A.substr(0,A.length()-1);
        }
    }
    cout<<A;
    return 0;
}