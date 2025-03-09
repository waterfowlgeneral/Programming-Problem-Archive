#include <bits/stdc++.h>
using namespace std;

int main() {
  int cases; cin >> cases;
  for (int i = 0; i < cases; i++) {
    int year; cin >> year;
    cout << year;

    if (year % 2 == 0) {
      cout << " Yang ";
    }
    else {
      cout << " Yin ";
    }

    int elementval = ((year - 4) % 10) / 2;
    
    if (elementval == 0) {
      cout << "Wood ";
    }
    else if (elementval == 1) {
      cout << "Fire ";
    }
    else if (elementval == 2) {
      cout << "Earth ";
    }
    else if (elementval == 3) {
      cout << "Metal ";
    }
    else if (elementval == 4) {
      cout << "Water ";
    }

    int animalval = (year - 4) % 12;
    if (animalval == 0) {
      cout << "Rat\n";
    }
    else if (animalval == 1) {
      cout << "Ox\n";
    }
    else if (animalval == 2) {
      cout << "Tiger\n";
    }
    else if (animalval == 3) {
      cout << "Rabbit\n";
    }
    else if (animalval == 4) {
      cout << "Dragon\n";
    }
    else if (animalval == 5) {
      cout << "Snake\n";
    }
    else if (animalval == 6) {
      cout << "Horse\n";
    }
    else if (animalval == 7) {
      cout << "Goat\n";
    }
    else if (animalval == 8) {
      cout << "Monkey\n";
    }
    else if (animalval == 9) {
      cout << "Rooster\n";
    }
    else if (animalval == 10) {
      cout << "Dog\n";
    }
    else if (animalval == 11) {
      cout << "Pig\n";
    }
    
  }
}