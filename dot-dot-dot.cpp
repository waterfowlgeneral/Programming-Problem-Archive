#include <bits/stdc++.h>
using namespace std;
int main() {
	int cases; cin >> cases;
    for (int i = 0; i < cases; i++) {
        int total = 0;
        string curr; cin >> curr;
        for (auto &letter : curr) {
            total += (letter - 'a' + 1);
        }
        cout << total << endl;
    }
}