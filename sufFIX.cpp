#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int cases; cin >> cases;
  
  for (int i = 0; i < cases; i++) {
    string num1; cin >> num1;
    string num2 = num1.substr(0, num1.length() - 2);
    
    if (num2[num2.length() - 2] == '1') {
      cout << num2 << "th" << endl;
    }
    else if (num2[num2.length() - 1] == '1') {
      cout << num2 << "st" << endl;
    }
    else if (num2[num2.length() - 1] == '2') {
      cout << num2 << "nd" << endl;
    }
    else if (num2[num2.length() - 1] == '3') {
      cout << num2 << "rd" << endl;
    }
    else {
      cout << num2 << "th" << endl;
    }
  }
}