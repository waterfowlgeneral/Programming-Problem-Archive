#include <bits/stdc++.h>
#include <vector>
#include <iostream>
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
vector<double> doubleSplit(string s, string delim) {
    vector<string> stringTokens = split(s, delim);
    vector<double> tokens;
    for (int i = 0; i < stringTokens.size(); i++) {
        tokens.push_back(stod(stringTokens[i]));
    }
    return tokens;
}

int main() {
    
    int cases; cin >> cases;
    string temp; getline(cin, temp);
    
    for (int i = 0; i < cases; i++) {
        string inputs; getline(cin, inputs);
        vector<double> nums = doubleSplit(inputs, " ");
        vector<string> printnums;
        for (int f = 0; f < nums.size(); f++) {
            if (nums[f] < 180) {
                nums[f] += 180;
            }
            else {
                nums[f] -= 180;
            }
            string finalnum = to_string(nums[f]);
            while (finalnum.find(".") < 3) {
                finalnum = "0" + finalnum;
            }
            printnums.push_back(finalnum.substr(0,6));
        }
        cout << printnums[0] << " " << printnums[1] << " " << printnums[2] << endl;
    }
}