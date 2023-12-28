#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cin>>str1>>str2;
    int len1 = str1.length();
    int len2 = str2.length();
    if(len1>len2){
        cout<<"Coding "<<len1;
    }else if(len2>len1){
        cout<<"Coding "<<len2;
    }else{
        cout<<"same";
    }
    return 0;
}