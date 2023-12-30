#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin>>s1>>s2;
    string n1,n2;
    for(int i=0;i<s1.length();i++){
        if(s1[i]>='0' && s1[i]<='9'){
            n1 += s1[i];
        }
    }
    for(int i=0;i<s2.length();i++){
        if(s2[i]>='0'&&s2[i]<='9'){
            n2 += s2[i];
        }
    }
    int sum = stoi(n1) + stoi(n2);
    cout<<sum;
    return 0;
}