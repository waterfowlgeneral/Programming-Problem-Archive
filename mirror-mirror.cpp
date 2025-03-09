#include <bits/stdc++.h>
using namespace std;
int main() {
	int cases; cin >> cases;
    cin.ignore();
    for (int i = 0; i < cases; i++) {
        string phrase; getline(cin, phrase);
        cout << phrase.back();
        for (int g = phrase.size()-1; g--; g >= 0) {
            cout << phrase[g];
        }
        cout << endl;
    }
}
