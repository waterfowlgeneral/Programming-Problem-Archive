#include <bits/stdc++.h>
using namespace std;

vector<string> split(string s, string delim) {
	vector<string> tokens;
	int index = s.find(delim);
	while (index != string::npos) {
		string token = s.substr(0, index);
		tokens.push_back(token);
		s = s.substr(index + delim.size());
		index = s.find(delim);
	}
	tokens.push_back(s);
	return tokens;
}

int main() {	
	int cases; cin >> cases;
	for (int i = 0; i < cases; i++) {
		int case1; int case2; cin >> case1 >> case2;
		cin.ignore();
		map<string, int> finances;
		vector<string> yesno;
		for (int g = 0; g < case1; g++) {
			string expense; getline(cin, expense);
			vector<string> expenseTemp = split(expense, " ");
			finances[expenseTemp[0]] = stoi(expenseTemp[1]);
		}
		for (int h = 0; h < case2; h++) {
			string currentExpense; getline(cin, currentExpense);
			vector<string> purchases = split(currentExpense, " ");
			if (purchases[1] == "+") {
				finances[purchases[0]] += stoi(purchases[2]);
				yesno.push_back("YES");
			}
			else {
				if ((finances[purchases[0]] - stoi(purchases[2])) < 0) {
					yesno.push_back("NO");
				}
				else {
					finances[purchases[0]] -= stoi(purchases[2]);
					yesno.push_back("YES");
				}
			}
		}
		for (auto &results : yesno) {
			cout << results << endl;
		}
	}
}
