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
    int a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    
    //10진수로 먼저 변환하기
    int num[10]={};
    int count=0,sum=0;
    while(n>0){
        num[count++]=n%10;
        n/=10;
    }
    reversearr(num,count);
    for(int i=0;i<count;i++){
        sum=sum*a + num[i];
    }

    //b진수
    int binary[10]={};
    int cnt =0;
    while(sum>0){
        if(sum<b){//a가 10이면
            binary[cnt++]=sum;
            break;
        }else{
            binary[cnt++]=sum%b;
            sum/=b;
        }
    }
    for(int i=cnt-1;i>=0;i--){
        cout<<binary[i];
    }
    return 0;
}