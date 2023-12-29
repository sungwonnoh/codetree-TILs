#include <iostream>
#include <string>
using namespace std;

int main() {
    string A,B;
    cin>>A>>B;
    int cnt=0;
    for(int i=0;i<A.length();i++){
        if(A.substr(i,2)==B){
            cnt +=1;
        }
    }
    cout<< cnt;
    return 0;
}