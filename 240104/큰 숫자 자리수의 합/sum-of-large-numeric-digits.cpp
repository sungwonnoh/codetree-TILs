#include <iostream>
using namespace std;
int bigsum(int num){
    if(num == 0){
        return 0;
    }
    return bigsum(num/10) + num %10;
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int num = a*b*c;
    cout<<bigsum(num);
    return 0;
}