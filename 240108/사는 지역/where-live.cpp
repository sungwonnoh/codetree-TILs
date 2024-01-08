#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Where{
    public:
        string name,a,city;
        Where(string name, string a, string city){
            this->name=name;
            this->a=a;
            this->city=city;
        }
        Where(){}
};
int main() {
    string sname,sa,scity;
    int n;
    cin>>n;
    Where live[10];
    string arr[10];

    for(int i=0;i<n;i++){
        cin>>sname>>sa>>scity;
        live[i]=Where(sname,sa,scity);
        arr[i] = sname;
    }

    sort(arr, arr+n);
    for(int i=0;i<n;i++){
        if(live[i].name==arr[n-1]){
            cout<<"name "<<live[i].name<<endl;
            cout<<"addr "<<live[i].a<<endl;
            cout<<"city "<<live[i].city;
        }
    }
    
    return 0;
}