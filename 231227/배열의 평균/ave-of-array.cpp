#include <iostream>
using namespace std;
int main() {
    int arr[2][4];
    int sum=0, a=0,b=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }
    for(int j=0;j<4;j++){
        a+=arr[0][j];
        b+=arr[1][j];
    }
    sum = a+b;
    a/=4;
    b/=4;
    cout<<fixed;
    cout.precision(1);
    cout<<(double)a<<" "<<(double)b<<endl;

    for(int j=0;j<4;j++){
        a=0;
        a= arr[0][j]+arr[1][j];
        a/=2;
        cout<< (double)a<<" ";
    } cout<<endl;

    cout<<fixed;
    cout.precision(1);
    cout<<(double)sum/8<<endl;
    return 0;
}