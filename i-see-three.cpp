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

int main() {
    int cases; cin >> cases;
    cin.ignore();
    for (int f = 0; f < cases; f++) {
        string nums; getline(cin, nums);
        vector<string> numsList = split(nums, " ");
        int check = 0;
        for(int j = 0; j < numsList.size(); j++) {
            if (count(numsList.begin(), numsList.end(), numsList[j]) == 3) {
                check = 1;
            }
        }
        if (check == 1) {
            cout << "TRUE" << endl;
        }
        else {
            cout << "FALSE" << endl;
        }
    }
}