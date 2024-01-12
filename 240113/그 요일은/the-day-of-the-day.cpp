#include <iostream>
#include <string>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    string a;
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> a;
    string week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int num_of_days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int arr[7]={1,0,0,0,0,0,0};
    int i=0;
    while(true){
        if(m1==m2 && d1==d2){
            break;
        }
        d1++;
        i++;
        if(i>=7){
            i=0;
        }
        
        arr[i]++;
        if(d1>num_of_days[m1]){
            m1++;
            d1=1;
        }
    }
    int idx=0;
    for(int i=0;i<7;i++){
        if(a==week[i]){
            idx =i;
        }
    }
    cout<<arr[idx];
    return 0;
}