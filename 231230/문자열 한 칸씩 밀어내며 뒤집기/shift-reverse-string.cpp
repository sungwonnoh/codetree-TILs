#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n,num;
    cin>>s>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        if(num == 1){
            s= s.substr(1,s.length()-1) + s[0];
            cout<<s<<endl;
        }else if(num ==2){
            s= s.substr(s.length()-1,1) + s.substr(0,s.length()-1);
            cout<<s<<endl;
        }else if(num == 3){
            int temp;
            for(int i=0;i<s.length()/2;i++){
                temp = s[i];
                s[i] = s[s.length()-1-i];
                s[s.length()-1-i] = temp;
            }
            cout<<s<<endl;
        }
    }

    return 0;
}