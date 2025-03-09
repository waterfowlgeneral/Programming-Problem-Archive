#include <bits/stdc++.h>
using namespace std;

int main() {
  int cases; cin >> cases;
  for (int i = 0; i < cases; i++) {
    int num1; int num2; cin >> num1 >> num2;
    cout << (num1+num2) << " " << (num1*num2) << endl;
  }
  return 0;
}