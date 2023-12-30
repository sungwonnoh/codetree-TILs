#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;//문자열
    int q;//질의의 수
    int n;//타입 번호
    char a,b,temp;
    int n1,n2;
    cin >>s>>q;
    for(int i=0;i<q;i++){
        cin>>n;
        if(n==1){
            cin>>n1>>n2;
            temp = s[n1-1];
            s[n1-1] = s[n2-1];
            s[n2-1] = temp;
            cout<<s<<endl;
        }else if(n==2){
            cin>>a>>b;
            for(int j=0;j<s.length();j++){
                if(s[j]==a){
                    s[j]=b;
                }
            }
            cout<<s<<endl;
        }
    }

    return 0;
}