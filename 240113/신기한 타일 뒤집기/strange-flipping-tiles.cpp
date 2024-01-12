#include <iostream>
using namespace std;

int main() {
    int n, x;
    int arr[200001] = {},white[200001] = {},black[200001] = {};
    char c;
    cin >> n;

    int now = 100000;

    for (int i = 0; i < n; i++) {
        cin >> x >> c;

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

    int w = 0, b=0;
    for (int i = 0; i < 200001; i++) {
        if (arr[i] ==1) {
            w += 1;
        }else if(arr[i]==2){
            b+=1;
        }
    }

    cout << w<<" "<<b;
    return 0;
}