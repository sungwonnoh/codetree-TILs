#include <iostream>
using namespace std;

int main() {
    int n,x;
    cin>>n;
    int arr[200001]={}, white[200001]={}, black[200001]={};
    int now= 100000;
    char c;
    for(int i=0;i<n;i++){
        cin>>x>>c;
/*
        if (c == 'L') {
            int start = max(now - x, 0);
            int end = min(now, 200000);
            for (int j = start; j < end; j++) {
                arr[j]=1;
                white[j]++;
            }
            now -= x;
        } else if (c == 'R') {
            int start = max(now, 0);
            int end = min(now + x, 200000);
            for (int j = start; j < end; j++) {
                arr[j]=2;
                black[j]++;
            }
            now += x;
        }*/
        if(c=='L'){
            for(int j=now;j>now-x;j--){
                white[j]++;
                arr[j]=1;
            }
            now-=x-1;
        }else if(c=='R'){
            for(int j=now;j<now+x;j++){
                black[j]++;
                arr[j]=2;
            }
            now+=x-1;
        }

    } 

    int w=0,b=0,g=0;
    for(int i=0;i<200001;i++){
        if(white[i]>=2 && black[i]>=2){
            g += 1;
        }else if (arr[i] == 1) {
            w += 1;
        } else if (arr[i] == 2) {
            b += 1;
        }
    }
    cout<<w<<" "<<b<<" "<<g;
    return 0;
}