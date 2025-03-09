#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int cases; cin >> cases;
    cin.ignore();

    map<char, int> key;
    string keystring; getline(cin, keystring);
    int val = 1;
    for (auto &letter : keystring) {
        key[val] = letter;
        val++;
    }

}
