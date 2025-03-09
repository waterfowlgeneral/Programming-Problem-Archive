#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cases; cin >> cases;
    for (int i = 0; i < cases; i++) {
        
        int num; cin >> num;
        vector<int> numbers(num - 1);
        
        for (int g = 0; g < num - 1; g++) {
            cin >> numbers[g];
        }
        
        sort(numbers.begin(), numbers.end());
        int endcheck = 1;
        
        if (numbers[0] != 1) {
            cout << 1 << endl;
            endcheck = 0; 
        }
        else {
            for (int f = 0; f < numbers.size() - 1; f++) {
                if (numbers[f] + 1 != numbers[f + 1]) {
                    cout << numbers[f] + 1 << endl;
                    endcheck = 0;
                }
            }
        }
        
        if (endcheck == 1) {
            cout << num << endl;
        }
    }
}