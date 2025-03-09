#include <bits/stdc++.h>
using namespace std;

int main() {
  int cases; cin >> cases;
  for (int i = 0; i < cases; i++) {
    string color; cin >> color;

    if (color == "red" || color == "blue" || color == "yellow") {
      cout << "No colors need to be mixed to make " << color << "." << endl;
    }
    else if (color == "green" || color == "blue-green" || color == "yellow-green") {
      cout << "In order to make " << color << ", blue and yellow must be mixed." << endl;
    }
    else if (color == "orange" || color == "yellow-orange" || color == "red-orange") {
      cout << "In order to make " << color << ", red and yellow must be mixed." << endl;
    }
    else if (color == "violet" || color == "red-violet" || color == "blue-violet") {
      cout << "In order to make " << color << ", blue and red must be mixed." << endl;
    }
  }
}