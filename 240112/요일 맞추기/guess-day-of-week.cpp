#include <iostream>
#include <string>
using namespace std;
int main() {
    int m1,d1,m2,d2;
    cin>>m1>>d1>>m2>>d2;
    string week[7]={"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int sum1=0,sum2=0;
    for(int i=1;i<m1;i++){
        sum1+= num_of_days[i];
    }
    sum1+=d1;

    for(int i=1;i<m2;i++){
        sum2+= num_of_days[i];
    }
    sum2+=d2;
    int idx=0;
    if(m1<=m2){
        idx= (sum2-sum1) %7;
        if(idx<0){
            idx+=7;
        }
        cout<<week[idx];
    }else if(m1>m2){
        idx =(sum1 - sum2) %7;
        if(idx<0){
            idx+=7;
        }
        cout<<week[(7 - idx) % 7];
    }
    return 0;
}