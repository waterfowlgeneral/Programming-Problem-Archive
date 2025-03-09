#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
int main() {
    int cases; cin >> cases;
    for (int f = 0; f < cases; f++) {
        int inputlen; cin >> inputlen;
        cin.ignore();
        string message; getline(cin, message);
        for (int v = 0; v < message.size() - 2; v++) {
            string currentToken = message.substr(v, 3); 
            string reverseToken = message.substr(v, 3); reverse(reverseToken.begin(), reverseToken.end());
            int currentTokenIndex = message.find(currentToken); int reverseTokenIndex = message.find(reverseToken);
            if (currentToken != reverseToken && message.find(reverseToken) != string::npos && reverseTokenIndex > currentTokenIndex + 2) {
                string currentMessage = message.substr(currentTokenIndex + 3, reverseTokenIndex - currentTokenIndex - 3);
                string finalMessage;
                for (int d = 0; d < currentMessage.size(); d++) {
                    if (currentToken.find(currentMessage[d]) != string::npos) {
                        d++;
                    }
                    finalMessage += currentMessage[d];
                }
                cout << finalMessage << endl;
                v = reverseTokenIndex + 2;
            }
        }
    }
}