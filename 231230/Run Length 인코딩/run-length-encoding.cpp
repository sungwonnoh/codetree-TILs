#include <iostream>
#include <string>
using namespace std;

int main() {
    string A;
    cin>>A;
    string makenewa;
    char nowA = A[0];
    int cntA = 1;
    for(int i=1;i<A.length();i++){
        if(A[i]==nowA){
            cntA +=1;
        }else{
            makenewa += nowA;
            makenewa += to_string(cntA);
            nowA = A[i];
            cntA =1;
        }
    }
    makenewa += nowA;
    makenewa += to_string(cntA);

    cout<< makenewa.length()<<endl;
    cout<< makenewa;
    return 0;
}