#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Profile{
    public:
        string n;
        int h, w;
        Profile(string n, int h, int w){
            this->n=n;
            this->h=h;
            this->w=w;
        }
        Profile(){}
};
bool cmp(Profile a, Profile b){
    return a.h < b.h;
}
int main() {
    int n;
    cin>>n;
    Profile pro[10];
    for(int i=0;i<n;i++){
        string name;
        int height, weight;
        cin>>name>>height>>weight;
        pro[i]=Profile(name, height, weight);
    }
    sort(pro, pro+n, cmp);
    for(int i=0;i<n;i++){
        cout<<pro[i].n<<" "<<pro[i].h<<" "<<pro[i].w<<endl;
    }
    
    return 0;
}