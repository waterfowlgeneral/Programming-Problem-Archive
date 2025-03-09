#include <bits/stdc++.h>
using namespace std;

int main() {
  int cases; cin >> cases;
  string waste; getline(cin, waste);
  for (int i = 0; i < cases; i++) {
    string phrase; getline(cin, phrase); 
    int num = 0; 
    for (int j = 0; j < phrase.length(); j++) {
      if (phrase[j] == 'a' || phrase[j] == 'e' || phrase[j] == 'i' || phrase[j] == 'o' || phrase[j] == 'u') {
        num++;
      }
    }
    cout << num << endl;
  }
}