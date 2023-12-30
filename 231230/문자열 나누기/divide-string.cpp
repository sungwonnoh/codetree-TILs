#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;
    string num;
    int cnt=0;

    for(int i=0;i<n;i++){
        cin>>num;
        for(int j=0;j<num.length();j++){
            char c = num[j];
            if(c != ' '){
                cout<<c;
                cnt += 1;
                if(cnt==5){
                    cout<<endl;
                    cnt=0;
                }
            }
        }
    }
    return 0;
}