#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, s;
    int count =0;
    getline(cin,str);
    //cin>>str;
    getline(cin, s);
    //cin>>s;
    for(int i=0;i<str.length();i++){
        if(str.find(s)==-1){
            break;
        }else if(str.find(s,i)<=i){
            count+=1;
        }
    }
    cout<<count;
    return 0;
}