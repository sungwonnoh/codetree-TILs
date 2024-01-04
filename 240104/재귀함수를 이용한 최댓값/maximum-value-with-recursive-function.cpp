#include <iostream>
using namespace std;
int maxNum(int n){
    int num[100];
    int temp;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(num[i]<num[j]){
                temp = num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    return num[n-1];
    
}
int main() {
    int n;
    cin>>n;
    cout<<maxNum(n);
    return 0;
}