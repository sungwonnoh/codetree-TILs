#include <iostream>
#include <algorithm>
using namespace std;
class Line{
    public:
        int h,w,idx;
        Line(int h, int w,int idx){
            this->h=h;
            this->w=w;
            this->idx=idx;
        }
        Line(){}
};
bool cmp(Line a, Line b){
    if(a.h==b.h){
        return a.w<b.w;
    }
    return a.h>b.h;
}
int main() {
    int n;
    cin>>n;
    Line line[1000];
    for(int i=0;i<n;i++){
        int a,b,idx;
        cin>>a>>b;
        idx = i+1;
        line[i]=Line(a,b,idx);
    }
    sort(line, line+n,cmp);
    for(int i=0;i<n;i++){
        cout<<line[i].h<<" "<<line[i].w<<" "<<line[i].idx<<endl;
    }
    return 0;
}