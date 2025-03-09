#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

vector<string> split(string s, string delim){
    
    vector<string> tokens;
    int index = s.find(delim);
    
    while (index != string::npos){
        string token = s.substr(0,index);
        tokens.push_back(token);
        s=s.substr(index+ delim.size());
        index = s.find(delim);
    }
    
    tokens.push_back(s);
    return tokens;
}

int main() {
    
    int cases; cin >> cases;
    string temp; getline(cin, temp);
    for (int i = 0; i < cases; i++) {
        string fullinput; getline(cin, fullinput);
        
        vector<string> inputs = split(fullinput, ":");
        vector<string> atbats = split(inputs[1], ",");
        double total = 0;
        int atbatslen = 0;
        
        for (int j = 0; j < atbats.size(); j++) {
            if (atbats[j] == "HR") {
                total += 4;
                atbatslen++;
            }
            else if (atbats[j] == "3B") {
                total += 3;
                atbatslen++;
            }
            else if (atbats[j] == "2B") {
                total += 2;
                atbatslen++;
            }
            else if (atbats[j] == "1B") {
                total++;
                atbatslen++;
            }
            else if (atbats[j] == "K") {
                atbatslen++;
            }
        }
        
        if (atbatslen == 0) {
            cout << inputs[0] << '=' << "0.000" << endl;
        }
        else {
            cout << fixed << setprecision(3);
            cout << inputs[0] << '=' << total/atbatslen << endl;
        }
    }
}