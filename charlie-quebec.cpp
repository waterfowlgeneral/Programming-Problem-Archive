#include <bits/stdc++.h>
using namespace std;

int main() {

	map<char, string> dictionary;
	dictionary['A'] = "Alpha";
	dictionary['B'] = "Bravo";
	dictionary['C'] = "Charlie";
	dictionary['D'] = "Delta";
	dictionary['E'] = "Echo";
	dictionary['F'] = "Foxtrot";
	dictionary['G'] = "Golf";
	dictionary['H'] = "Hotel";
	dictionary['I'] = "India";
	dictionary['J'] = "Juliet";
	dictionary['K'] = "Kilo";
	dictionary['L'] = "Lima";
	dictionary['M'] = "Mike";
	dictionary['N'] = "November";
	dictionary['O'] = "Oscar";
	dictionary['P'] = "Papa";
	dictionary['Q'] = "Quebec";
	dictionary['R'] = "Romeo";
	dictionary['S'] = "Sierra";
	dictionary['T'] = "Tango";
	dictionary['U'] = "Uniform";
	dictionary['V'] = "Victor";
	dictionary['W'] = "Whiskey";
	dictionary['X'] = "Xray";
	dictionary['Y'] = "Yankee";
	dictionary['Z'] = "Zulu";

	int cases; cin >> cases;
	
	for (int i = 0; i < cases; i++) {
		int cases2; cin >> cases2;
		cin.ignore();
		for (int v = 0; v < cases2; v++) {
			string phrase; getline(cin, phrase);
			for (auto &letter : phrase) {
				letter = toupper(letter);
			}
			for (int g = 0 ; g < phrase.size(); g++) {
				if (phrase[g] == ' ') {
					cout << " ";
				}
				else if (phrase[g+1] == ' ' || g == phrase.size() - 1) {
					cout << dictionary[phrase[g]];
				}
				else {
					cout << dictionary[phrase[g]] << "-";
				}
			}
			cout << endl;
		}
	}
}