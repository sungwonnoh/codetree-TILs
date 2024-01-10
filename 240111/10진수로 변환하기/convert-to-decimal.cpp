#include <iostream>
using namespace std;
void reversearr(int arr[], int size){
    int start=0;
    int end = size-1;

    while(start<end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main() {
    int n;
    cin>>n;
    int num[8]={};
    int cnt=0, sum=0;
    while(n>0){
        num[cnt++]=n%10;
        n/=10;
    }
    reversearr(num, cnt);
    for(int i=0;i<cnt;i++){
        sum = sum*2 + num[i];
    }
    cout<<sum;
    return 0;
}