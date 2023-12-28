#include <iostream>
#include <string>
using namespace std;
int main() {
    string arr[10];
    char c;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cin>>c;
    bool found = false;
    for(int i=0;i<10;i++){
        int n = arr[i].length();
        if(arr[i][n-1]==c){
            cout<<arr[i]<<endl;
        }
        found = true;
    }
    if(!found){
        cout<<"None";
    }
    return 0;
}