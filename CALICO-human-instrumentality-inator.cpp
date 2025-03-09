#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int count(string s, char c) {
    int res = 0;
 
    for (int i=0;i<s.length();i++) {
        if (s[i] == c) {
            res++;
        }
    }
    return res;
}

int main() {
    int cases; cin >> cases;
    for (int g = 0; g < cases; g++) {
        
        int length; int width; cin >> length; cin >> width;
        cin.ignore();
        vector<string> image;
        int firstLine = -1;
        for (int i = 0; i < length; i++) {
            string currentLine; getline(cin, currentLine);
            image.push_back(currentLine);
            
            if (count(currentLine, '#') > 0 && firstLine == -1) {
                firstLine = i;
            }
        }
        
        if (count(image[firstLine], '#') == count(image[firstLine + 1], '#')) {
            cout << "ferb" << endl;
        }
        else {
            cout << "phineas" << endl;
        }
        
    }
}