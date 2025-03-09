#include <bits/stdc++.h>
#include <iostream>
#include <vector>
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
    cin.ignore();
    string nums; getline(cin, nums);
    vector<int> intNums; intNums = intSplit(nums, " ");
    cout << intNums[intNums.size()-1] + (intNums[intNums.size()-1]-intNums[intNums.size()-2]) << endl;
}