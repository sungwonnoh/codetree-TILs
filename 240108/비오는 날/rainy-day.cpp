#include <iostream>
#include <string>
using namespace std;
class Rainyday{
public:
    string date, day, whether;
    Rainyday(string date, string day, string whether){
        this->date=date;
        this->day=day;
        this->whether=whether;
    }
    Rainyday(){}
};
int main() {
    int n;
    cin>>n;
    Rainyday rain[100];
    for(int i=0;i<n;i++){
        string date, day, whether;
        cin>> date>>day>>whether;
        rain[i]= Rainyday(date, day, whether);
    }
    int lately = 0;
    string rainday = "9999-99-99";
    for(int i=0;i<n;i++){
        if(rain[i].date<rainday){
            if(rain[i].whether=="Rain"){
                rainday = rain[i].date;
                lately = i;
            }
        }
    }
    cout<<rain[lately].date<<" "<<rain[lately].day<<" "<<rain[lately].whether;
    return 0;
}