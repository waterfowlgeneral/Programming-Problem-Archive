#include <bits/stdc++.h>
using namespace std;
int main() {
	int cases; cin >> cases;
    for (int i = 0; i < cases; i++) {
        int times; int herald; cin >> times >> herald;
        if (times > herald) {
            cout << "Times has " << (times - herald) << " more subscribers" << endl;
        }
        else if (herald > times) {
            cout << "Herald has " << (herald - times) << " more subscribers" << endl;
        }
        else {
            cout << "Times and Herald have the same number of subscribers" << endl;
        }
    }
}