#include <iostream>
#include <string>
using namespace std;
int main() {
    int n,sum=0;
    string a,an;
    cin>>n>>a;
    for(int i=0;i<n;i++){
        cin>>an;
        if(a==an){
            sum +=1;
        }
    }
    cout<<sum;
    return 0;
}