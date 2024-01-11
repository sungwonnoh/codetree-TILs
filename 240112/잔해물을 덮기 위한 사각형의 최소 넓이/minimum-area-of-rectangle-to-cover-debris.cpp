#include <iostream>
using namespace std;

int main() {
    int x1,x2,y1,y2;
    int arr[2001][2001]={};
    for(int i=0;i<2;i++){
        cin>>x1>>y1>>x2>>y2;
        x1+=1000;
        y1+=1000;
        x2+=1000;
        y2+=1000;
        for(int j=x1;j<x2;j++){
            for(int k=y1;k<y2;k++){
                arr[j][k]+=1;
                if(i==1&&arr[j][k]==1){
                    arr[j][k]=0;
                }
            }
        }
    } 

    int min_x = 2000, min_y = 2000, max_x = 0, max_y = 0;

    for (int i = 0; i <= 2000; i++) {
        for (int j = 0; j <= 2000; j++) {
            if (arr[i][j] == 1) {
                max_x = max(max_x, i);
                max_y = max(max_y, j);
                min_x = min(min_x, i);
                min_y = min(min_y, j);
            }
        }
    }
    int area = 0;

    if (min_x ==2000 && min_y ==2000 && max_x ==0 && max_y ==0) {
        area = 0;
    }else {
        area = (max_x - min_x + 1) * (max_y - min_y + 1);
    }

    cout << area;
    return 0;
}