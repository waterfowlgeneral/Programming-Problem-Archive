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
    cin.ignore();
    double totalDistance;
    cout << fixed << setprecision(7);
    vector<double> distances;
    for (int i = 0; i < cases; i++) {
        string coordsString; getline(cin, coordsString);
        vector<int> coords; coords = intSplit(coordsString, " ");
        distances.push_back(sqrt(pow(coords[0], 2) + pow(coords[1], 2)));
    }
    sort(distances.begin(), distances.end());
    for (int d = 0; d < distances.size()-1; d++) {
        distances[d] *= 2;
        totalDistance += distances[d];
    }
    totalDistance += distances.back();
    cout << totalDistance << endl;
}