#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    int nab = stoi(a+b);
    int nba = stoi(b+a);
    cout<<nab + nba ;
    return 0;
}