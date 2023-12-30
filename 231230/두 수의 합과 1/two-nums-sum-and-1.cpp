#include <iostream>
#include <string>
using namespace std;
int main() {
    int n1, n2;
    cin>>n1>>n2;
    int sum = n1+n2;
    int cnt=0;
    string s = to_string(sum);
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            cnt +=1;
        }
    }
    cout<<cnt;
    return 0;
}