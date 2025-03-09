#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;

    for (int i = 0; i < cases; i++) {
        string num; string phonetype;
        cin >> num >> phonetype;    
        if (phonetype == "PARENTHESES") {
            cout << "(" << num.substr(0,3) << ") " << num.substr(3,3) << "-" << num.substr(6) << endl;
        }
        else if (phonetype == "DASHES") {
            cout << num.substr(0,3) << "-" << num.substr(3,3) << "-" << num.substr(6) << endl;
        }
        else if (phonetype == "PERIODS") {
            cout << num.substr(0,3) << "." << num.substr(3,3) << "." << num.substr(6) << endl;
        }
    }
}