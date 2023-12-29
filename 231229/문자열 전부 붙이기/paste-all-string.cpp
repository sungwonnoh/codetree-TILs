#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string str[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str[i];
        cout<<str[i];
    }
    return 0;
}