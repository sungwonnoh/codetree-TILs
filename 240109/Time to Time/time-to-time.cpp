#include <iostream>
using namespace std;
int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int h1,h2;
    h1 = a*60 + b;
    h2 = c*60 + d;
    cout<< h2- h1;
    return 0;
}