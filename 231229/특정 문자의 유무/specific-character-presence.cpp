#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin>>str;
    bool eisRight = false;
    bool aisRight = false;

    for(int i=0;i<str.length();i++){
        if(str[i]=='e'&&str[i+1]=='e'){
            eisRight = true;
        }
        if(str[i]=='a'&&str[i+1]=='b'){
            aisRight = true;
        }
    }
    if(eisRight == true){
        cout<< "Yes ";
    }else{
        cout<<"No ";
    }
    if(aisRight == true){
        cout<< "Yes";
    }else{
        cout<<"No";
    }
    return 0;
}