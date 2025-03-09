#include <bits/stdc++.h>
using namespace std;

int main() {
  int cases; cin >> cases;
  for (int i = 0; i < cases; i++) {
    int grade; cin >> grade;

    if (grade >= 70) {
      cout << "PASS" << endl;
    } 
    else {
      cout << "FAIL" << endl;
    }
  }
  return 0;
}