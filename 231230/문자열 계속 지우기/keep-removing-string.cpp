#include <iostream>
#include <string>
using namespace std;

int main() {
    string A,B;
    cin>>A>>B;
    
    

    while(true){
        bool findB = false;
        int nA = A.length();
        int nB = B.length();
        for(int i=0;i<nA;i++){
            if(A.substr(i,nB)==B){
                A.erase(i,nB);
                findB = true;
                break;
            }
        }
        if(!findB){
            break;
        }
    }
    cout<<A;
    return 0;
}