#include <iostream>
using namespace std;
void month(int n, int d){
    if(n==1||n==3||n==5||n==7||n==8||n==10||n==12){
        if(d>=1&&d<=31){
            cout<<"Yes";
        }else{
            cout<<"No";
        }
    }else if(n==4||n==6||n==9||n==11){
        if(d>=1&&d<=30){
            cout<<"Yes";
        }else{
            cout<<"No";
        }
    }else if(n==2){
        if(d>=1&&d<=28){
            cout<<"Yes";
        }else{
            cout<<"No";
        }
    }else{
        cout<<"No";
    }
}
int main() {
    int n,d;
    cin>>n>>d;
    month(n,d);
    return 0;
}