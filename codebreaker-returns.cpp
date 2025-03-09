#include <bits/stdc++.h>
using namespace std;
int main() {
	int cases; cin >> cases;
	for (int i = 0; i < cases; i++) {
		map<string, double> characterTotals;
		vector<string> duos; vector<string> trios;
		int lineNum; cin >> lineNum;
		double totalDuos = 0; double totalTrios = 0;
		cin.ignore();
		for (int g = 0; g < lineNum; g++) {
			string currentLine; getline(cin, currentLine);
			string newCurrentLine;
			for (auto &letter : currentLine) {
				if (isalpha(letter)) {
					newCurrentLine += toupper(letter);
				}
				else if (letter == ' ') {
					newCurrentLine += ' ';
				}
			}
			for (int v = 0; v < newCurrentLine.size() - 1; v++) {
				string currentPair = newCurrentLine.substr(v,2);
				if (isalpha(currentPair[0]) && isalpha(currentPair[1])) {
					totalDuos++;
					if (find(duos.begin(), duos.end(), currentPair) == duos.end()) {
						duos.push_back(currentPair);
						characterTotals[currentPair] = 1;
					}
					else {
						characterTotals[currentPair]++;
					}
				}
			}
			for (int s = 0; s < newCurrentLine.size() - 2; s++) {
				string currentPair = newCurrentLine.substr(s,3);
				if (isalpha(currentPair[0]) && isalpha(currentPair[1]) && isalpha(currentPair[2])) {
					totalTrios++;
					if (find(trios.begin(), trios.end(), currentPair) == trios.end()) {
						trios.push_back(currentPair);
						characterTotals[currentPair] = 1;
					}
					else {
						characterTotals[currentPair]++;
					}
				}
			}
		}
		sort(duos.begin(),duos.end());
		sort(trios.begin(),trios.end());
		for (auto &pair : duos) {
			cout << setprecision(3) << fixed << pair << ": " << ((characterTotals[pair]/totalDuos)*100) << "%" << endl;
		}
		for (auto &pair : trios) {
			cout << setprecision(3) << fixed << pair << ": " << ((characterTotals[pair]/totalTrios)*100) << "%" << endl;
		}
	}
}