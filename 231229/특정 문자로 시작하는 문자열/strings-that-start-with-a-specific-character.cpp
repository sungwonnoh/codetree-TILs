#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin>>n;
    string str[n];
    char c;
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    cin>>c;
    int cnt=0, sum=0;
    for(int i=0;i<n;i++){
        if(str[i][0]==c){
            cnt +=1;
            sum += str[i].length();
        }
    }
    cout<<fixed;
    cout.precision(2);
    cout<<cnt<<" "<<(double)sum/cnt;
    return 0;
}