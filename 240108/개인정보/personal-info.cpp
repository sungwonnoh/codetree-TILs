#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;
class Profile{
    public:
        string name;
        int h;
        double w;
        Profile(string name, int h, double w){
            this->name=name;
            this->h=h;
            this->w=w;
        }
        Profile(){}
};
bool n(Profile a, Profile b){
    return a.name<b.name;
}
bool height(Profile a, Profile b){
    return a.h>b.h;
}
int main() {
    Profile pro[5];
    for(int i=0;i<5;i++){
        string n;
        int h;
        double w;
        cin>>n>>h>>w;
        pro[i]=Profile(n,h,w);
    }
    sort(pro, pro+5, n);
    cout<<"name"<<endl;
    for(int i=0;i<5;i++){
        cout<<pro[i].name<<" "<<pro[i].h<<" "<<fixed << setprecision(1) <<pro[i].w<<endl;
    }
    cout<<endl;
    sort(pro,pro+5,height);
    cout<<"height"<<endl;
    for(int i=0;i<5;i++){
        cout<<pro[i].name<<" "<<pro[i].h<<" "<<fixed << setprecision(1) <<pro[i].w<<endl;
    }
    return 0;
}