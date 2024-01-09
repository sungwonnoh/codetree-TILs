#include <iostream>
#include <string>
using namespace std;

int main() {
    int m1,d1,m2,d2;
    string a;
    cin>>m1>>d1>>m2>>d2;
    cin>>a;
    string week[7]={"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int num_of_days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int w1=0, w2=0;
    for(int i=1;i<m2;i++){
        w2 += num_of_days[i];
    }
    w2+=d2;
    for(int i=1;i<m1;i++){
        w1 +=num_of_days[i];
    }
    w1+=d1;
    int date = w2-w1;
    int result=0,idx=0;
    for(int i=0;i<7;i++){
        if(a==week[i]){
            idx = i+1;
        }
    }
    result = (date + idx-1)/7 ;
    cout<<result;
    return 0;
}