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
        
        string nums1string; getline(cin, nums1string);
        vector<double> nums1 = doubleSplit(nums1string, " ");
        
        string nums2string; getline(cin, nums2string);
        vector<double> nums2 = doubleSplit(nums2string, " ");
        
        vector<int> indices;
        
        for (int h = 0; h < nums1.size(); h++) {
            if (nums1[h] >= 0.6 && nums1[h] <= 0.85 && nums2[h] >= 0.6 && nums2[h] <= 0.85) {
                indices.push_back(h);
            }
        }
        
        if (indices.size() == 0) {
            cout << "No multipaction events detected." << endl;
        }
        else if (indices.size() == 1) {
            cout << "A multipaction event was detected at time index " << indices[0] << "." << endl;
        }
        else {
            cout << indices.size() << " multipaction events were detected at time indices: ";
            for (int v = 0; v < indices.size() - 1; v++) {
                cout << indices[v] << " ";
            }   
            cout << indices[indices.size()-1] << "." << endl;
        }
    }
}