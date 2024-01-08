#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Score{
    public:
        string n;
        int k,e,m;
        Score(string n, int k, int e, int m){
            this->n=n;
            this->k=k;
            this->e=e;
            this->m=m;
        }
        Score(){}
};
bool cmp(Score a, Score b){
    if(a.k==b.k){
        if(a.e==b.e){
            return a.m>b.m;
        }else{
            return a.e>b.e;
        }
    }else{
        return a.k>b.k;
    }
}
int main() {
    int n;
    cin>>n;
    Score score[10];
    for(int i=0;i<n;i++){
        string name;
        int sk,se,sm;
        cin>>name>>sk>>se>>sm;
        score[i]= Score(name, sk, se,sm);
    }
    sort(score, score + n, cmp);
    for(int i=0;i<n;i++){
        cout<< score[i].n<<" "<<score[i].k<<" "<<score[i].e<<" "<<score[i].m<<endl;
    }
    
    return 0;
}