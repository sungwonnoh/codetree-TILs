#include <iostream>
using namespace std;
int main() {
    int x,y;
    char c;
    while(true){
        cin>>x>>y>>c;
        cout<<x*y<<endl;
        if(c=='C'){
            break;
        }
    }
    return 0;
}