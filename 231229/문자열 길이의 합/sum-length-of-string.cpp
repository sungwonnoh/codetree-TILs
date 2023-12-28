#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int sum=0,count=0;
    cin>>n;
    string str[n];
    
    for(int i=0;i<n;i++){
        cin>>str[i];
        sum += str[i].length();
    }
    for(int i=0;i<n;i++){
        if(str[i][0]=='a'){
            count +=1;
        }
    }
    cout<<sum<<" "<<count;
    return 0;
}