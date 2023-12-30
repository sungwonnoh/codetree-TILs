#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, s;
    int sum = 0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        sum += s;
    }
    string numstr = to_string(sum);
    string newS = numstr.substr(1,numstr.length() -1) + numstr[0];
    cout<<newS;
    return 0;
}