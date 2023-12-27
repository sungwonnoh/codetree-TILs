#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int arr[2][4];
    double sum=0, a=0,b=0;
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
    a=a/4.0;
    b=b/4.0;
    cout << fixed << setprecision(1)<<(double)a<<" "<<(double)b<<endl;

    for(int j=0;j<4;j++){
        a=0;
        a= arr[0][j]+arr[1][j];
        a/=2.0;
        cout<< (double)a<<" ";
    } cout<<endl;

    cout << fixed << setprecision(1)<<(double)sum/8.0<<endl;
    return 0;
}