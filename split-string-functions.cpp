#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

// split string
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

// split string into integer
vector<int> intSplit(string s, string delim) {
    
    vector<string> stringTokens = split(s, delim);
    vector<int> tokens;
    
    for (int i = 0; i < stringTokens.size(); i++) {
        tokens.push_back(stoi(stringTokens[i]));
    }
    
    return tokens;
}

// split string into double
vector<double> doubleSplit(string s, string delim) {
    
    vector<string> stringTokens = split(s, delim);
    vector<double> tokens;
    
    for (int i = 0; i < stringTokens.size(); i++) {
        tokens.push_back(stod(stringTokens[i]));
    }
    
    return tokens;
}

int main() {
    string test = "0.5 0.4 0.3 0.2 0.1";
    vector<double> numbers = doubleSplit(test, " ");
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] * 2 << endl;
    }
}

