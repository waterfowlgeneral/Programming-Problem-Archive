#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int cases; cin >> cases;
    cin.ignore();
    
    for (int g = 0; g < cases; g++) {
        string oreo; getline(cin, oreo);
        
        for (int i = 0; i < oreo.size(); i++) {
            if (oreo[i] == 'O') {
                cout << "[###OREO###]" << endl;
            }
            else if (oreo[i] == 'R') {
                cout << "[--------]" << endl;
                i++;
            }
            else if (oreo[i] == '&') {
                cout << endl;
            }
        }
    }
}