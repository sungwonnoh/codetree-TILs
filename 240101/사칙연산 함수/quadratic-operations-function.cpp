#include <iostream>
using namespace std;

void plusnum(int a, int c){
    int result = a + c;
    cout<<a<<" + "<<c<<" = "<<result;
}
void minusnum(int a, int c){
    int result = a - c;
    cout<<a<<" - "<<c<<" = "<<result;
}
void division(int a, int c){
    int result = a / c;
    cout<<a<<" / "<<c<<" = "<<result;
}
void multiply(int a, int c){
    int result = a * c;
    cout<<a<<" * "<<c<<" = "<<result;
}

int main() {
    int a,c;
    char o;
    cin>>a>>o>>c;
    if(o=='+'){
        plusnum(a,c);
    }else if(o=='-'){
        minusnum(a,c);
    }else if(o=='/'){
        division(a,c);
    }else if(o=='*'){
        multiply(a,c);
    }else{
        cout<<"False";
    }
    return 0;
}