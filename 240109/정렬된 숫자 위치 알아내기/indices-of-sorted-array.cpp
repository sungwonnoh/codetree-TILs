#include <iostream>
#include <algorithm>
using namespace std;
class Find{
    public:
        int n,idx,o;
        Find(int n,int idx){
            this->n=n;
            this->idx=idx;
        }
        Find(){}
};
bool cmp(Find a, Find b){
    if(a.n==b.n){
        return a.idx < b.idx;
    }
    return a.n<b.n;
}
int main() {
    int n;
    cin>>n;
    Find f[1000];
    int change[1000];
    for(int i=0;i<n;i++){
        int N;
        cin>>N;
        f[i]=Find(N,i);
    }
    sort(f, f+n,cmp);
    for(int i=0;i<n;i++){
        change[f[i].idx] = i+1;
    }
    for(int i=0;i<n;i++){
        cout<<change[i]<<" ";
    }
    return 0;
}