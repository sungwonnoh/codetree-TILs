#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[5]={"apple", "banana", "grape", "blueberry", "orange"};
    char c;
    cin>>c;
    int result=0;
    for(int i=0;i<5;i++){
        if(arr[i][2]==c){
            result +=1;
            cout<<arr[i]<<endl;
        }else if(arr[i][3]==c){
            result+=1;
            cout<<arr[i]<<endl;
        }
    }
    cout<<result;
    return 0;
}