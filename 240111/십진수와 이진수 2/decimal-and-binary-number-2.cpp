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
    int num[10]={};
    int cnt=0, sum=0;
    while(n>0){
        num[cnt++]=n%10;
        n/=10;
    }
    reversearr(num, cnt);
    for(int i=0;i<cnt;i++){
        sum = sum*2 + num[i];
    }//십진수변환
    sum*=17;
    int count=0;
    int binary[10]={};
    while(true){
        if(sum<2){
            binary[count++]=sum;
            break;
        }else{
            binary[count++] = sum%2;
            sum/=2;
        }
    }

    for(int i=count-1;i>=0;i--){
        cout<<binary[i];
    }
    return 0;
}