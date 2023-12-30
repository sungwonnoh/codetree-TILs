#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    while (s.length() > 1) {
        int n;
        cin >> n;
        if (n >= 0 && s.length() > n) {
            s.erase(n, 1);
            cout << s << endl;
        }else {
            s.erase(s.length()-1,1);
            cout<<s<<endl;
        }
    }

    return 0;
}