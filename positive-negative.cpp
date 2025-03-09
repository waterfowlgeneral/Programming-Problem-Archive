#include <bits/stdc++.h>
using namespace std;

int main() {
  int cases; cin >> cases;
  for (int i = 0; i < cases; i++) {
    int num; cin >> num;
    if (num > 0) {
      cout << "POSITIVE\n";
    }
    else {
      cout << "NEGATIVE\n";
    }
  }
}