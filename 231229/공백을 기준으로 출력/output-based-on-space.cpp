#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    string result1;
    for(char c1: str1){
        if(c1 !=' ')
            result1 +=c1;
    }
    string result2;
    for(char c2: str2){
        if(c2 !=' ')
            result2 +=c2;
    }
    cout<<result1<<result2;
    return 0;
}