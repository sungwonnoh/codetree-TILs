#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    int len1=s1.length();
    int len2=s2.length();
    int len3=s3.length();
    if(len1>=len2&&len2>=len3){
        cout<<len1-len3;
    }else if(len1>=len3&&len3>=len2){
        cout<<len1-len2;
    }else if(len2>=len1&&len1>=len3){
        cout<<len2-len3;
    }else if(len2>=len3&&len3>=len1){
        cout<<len2-len1;
    }else if(len3>=len1&&len1>=len2){
        cout<<len3-len2;
    }else if(len3>=len2&&len2>=len1){
        cout<<len3-len1;
    }
    return 0;
}