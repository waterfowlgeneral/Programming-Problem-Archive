#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cases; cin >> cases;
    vector<string> countries;
    string currentCountry;
    for (int i = 0; i < cases; i++) {
        cin >> currentCountry;
        countries.push_back(currentCountry);
    }
    sort(countries.begin(), countries.end());
    
    for (int f = 0; f < countries.size(); f++) { 
        cout << countries[f] << endl;
    }
}