#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Compare{
    public:
        string n;
        int a,b,c;
        int sum = a+b+c;
        Compare(string n, int a, int b, int c){
            this->n=n;
            this->a=a;
            this->b=b;
            this->c=c;
        }
        Compare(){}
};
bool cmp(Compare one, Compare two){
    return one.sum>two.sum;
}
int main() {
    int n;
    cin>>n;
    Compare compare[10];
    for(int i=0;i<n;i++){
        string name;
        int a,b,c;
        cin>>name>>a>>b>>c;
        compare[i]=Compare(name,a,b,c);
    }
    sort(compare, compare+n, cmp);
    for(int i=0;i<n;i++){
        cout<<compare[i].n<<" "<<compare[i].a<<" "<<compare[i].b<<" "<<compare[i].c<<endl;
    }
    return 0;
}