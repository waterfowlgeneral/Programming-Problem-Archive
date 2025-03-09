#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<string> split(string s, string delim) {
    
    vector<string> tokens;
    int index = s.find(delim);
    
    while (index != string::npos) {
        string token = s.substr(0, index);
        tokens.push_back(token);
        s = s.substr(index + delim.size());
        index = s.find(delim);
    }
    
    tokens.push_back(s);
    return tokens;
}

vector<int> intSplit(string s, string delim) {
    
    vector<string> stringTokens = split(s, delim);
    vector<int> tokens;
    
    for (int i = 0; i < stringTokens.size(); i++) {
        tokens.push_back(stoi(stringTokens[i]));
    }
    
    return tokens;
}

int main() {
    int cases; cin >> cases;
    string temp; getline(cin, temp);
    
    for (int i = 0; i < cases; i++) {
        
        string inputs; getline(cin, inputs);
        vector<int> vals = intSplit(inputs, " ");
        double dis = sqrt(pow((vals[4] - vals[0]),2) + pow((vals[5] - vals[1]),2) + pow((vals[6] - vals[2]),2));
        if (dis <= vals[3]) {
            cout << vals[7] << " " << vals[8] << " " << vals[9] << endl;
        }
        else {
            cout << vals[4] << " " << vals[5] << " " << vals[6] << endl;
        }
        
    }
}