#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
class Point{
    public:
        int x,y,idx;
        Point(int x, int y,int idx){
            this->x=x;
            this->y=y;
            this->idx=idx;
        }
        Point(){}
};
bool cmp(Point a, Point b){
    if(abs(a.x)+abs(a.y) == abs(b.x)+abs(b.y)){
        return a.idx>b.idx;
    }
    return abs(a.x)+abs(a.y)>abs(b.x)+abs(b.y);
}
int main() {
    int n;
    cin>>n;
    Point point[1000];
    for(int i=0;i<n;i++){
        int x,y,idx;
        cin>>x,y;
        idx = i+1;
        point[i] = Point(x,y,idx);
    }
    sort(point, point+n,cmp);
    for(int i=0;i<n;i++){
        cout<<point[i].idx<<endl;
    }
    return 0;
}