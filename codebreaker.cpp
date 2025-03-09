#include <bits/stdc++.h>
using namespace std;
int main() {
	int cases; cin >> cases;
	for (int i = 0; i < cases; i++) {
		map<char, double> characterTotals;
		vector<char> alphabet{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
		for (auto &letter : alphabet) {
			characterTotals[letter] = 0;
		}
		int lineNum; cin >> lineNum;
		int totalCharCount = 0;
		cin.ignore();
		for (int g = 0; g < lineNum; g++) {
			string currentLine; getline(cin, currentLine);
			for (auto &letter : currentLine) {
				if (characterTotals.count(toupper(letter)) != 0) {
					totalCharCount++;
					characterTotals[toupper(letter)]++;
				}
			}
		}
		for (auto &letter : alphabet) {
			cout << setprecision(2) << fixed << letter << ": " << ((characterTotals[letter]/totalCharCount)*100) << "%" << endl;
		}
	}
}