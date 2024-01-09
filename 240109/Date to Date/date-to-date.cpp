#include <iostream>
using namespace std;

int main() {
    int m1,d1,m2,d2;
    cin >> m1>>d1>>m2>>d2;
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int date=0, wholedate=0, eachdate =0;
    for(int i=1;i<m2;i++){
        wholedate +=num_of_days[i];
    } 
    wholedate += d2;
    if(m1>1){
        for(int i=1;i<m1;i++){
            eachdate += num_of_days[i];
        }
        eachdate += d1;
    }else if(m1==1){
        eachdate = d1;
    }
    
    date= wholedate - eachdate+1;
    cout<< date;
    return 0;
}