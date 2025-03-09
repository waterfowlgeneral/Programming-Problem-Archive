#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
int main() {
    int cases; cin >> cases;
    for (int i = 0; i < cases; i++) {
        string money;
        cin >> money;
        cout << money << endl;
        money = money.substr(1);
        double amount = stod(money);
        int cents = (amount * 100) + 0.5;
        int quarters = cents / 25;
        cents %= 25;
        int dimes = cents / 10;
        cents %= 10;
        int nickels = cents / 5;
        cents %= 5;
        int pennies = cents;
        cout << "Quarters=" << quarters << endl;
        cout << "Dimes=" << dimes << endl;
        cout << "Nickels=" << nickels << endl;
        cout << "Pennies=" << pennies << endl;
    }
}