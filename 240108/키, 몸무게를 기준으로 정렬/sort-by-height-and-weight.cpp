#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Profile{
    public:
        string name;
        int h,w;
        Profile(string name, int h, int w){
            this->name=name;
            this->h=h;
            this->w=w;
        }
        Profile(){}
};
bool cmp(Profile a, Profile b){
    if(a.h==b.h){
        return a.w>b.w;
    }
    return a.h<b.h;
}
int main() {
    int n;
    cin>>n;
    Profile pro[10];
    for(int i=0;i<n;i++){
        string n;
        int h,w;
        cin>>n>>h>>w;
        pro[i]=Profile(n,h,w);
    }
    sort(pro,pro+n,cmp);
    for(int i=0;i<n;i++){
        cout<<pro[i].name<<" "<<pro[i].h<<" "<<pro[i].w<<endl;
    }
    return 0;
}