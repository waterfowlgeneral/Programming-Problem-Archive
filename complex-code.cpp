#include <bits/stdc++.h>
#include <vector>
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

vector<int> intSplit(string s, string delim) {
	vector<string> stringTokens = split(s, delim);
	vector<int> tokens;
	for (int i = 0; i < stringTokens.size(); i++) {
		tokens.push_back(stoi(stringTokens[i]));
	}
	return tokens;
}

int main() {

	int cases;
	cin >> cases;
	cin.ignore();

	for (int f = 0; f < cases; f++) {

		int currentBracketSequence = 0;
		int highestDepth = 0;
		int cyclo = 1;
		string limits;
		getline(cin, limits);
		vector<int> intLimits = intSplit(limits, " ");

		for (int g = 0; g < intLimits[0]; g++) {

			string currentLine;
			getline(cin, currentLine);

			if (currentLine == "{") {
				currentBracketSequence++;
				if (highestDepth < currentBracketSequence) {
					highestDepth = currentBracketSequence;
				}
			}

			else if (currentLine == "}") {
				currentBracketSequence--;
			}

			else if (currentLine.substr(0, 2) == "If") {
				cyclo++;
			}
		}

		if (cyclo <= intLimits[1] && highestDepth <= intLimits[2]) {
			cout << cyclo << " " << highestDepth << " PASS" << endl;
		}

		else {
			cout << cyclo << " " << highestDepth << " FAIL" << endl;
		}
	}
}