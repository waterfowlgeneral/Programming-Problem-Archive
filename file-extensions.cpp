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
	map<string,int> filetypes;
	vector<string> fileOrder;
	int cases; cin >> cases;
	cin.ignore();
	for (int i = 0; i < cases; i++) {
		string currentFile; getline(cin, currentFile);
		vector<string> filetypeTemp = split(currentFile, ".");
		
		if (filetypes.count(filetypeTemp[1]) == 0) {
			filetypes[filetypeTemp[1]] = 1;
			fileOrder.push_back(filetypeTemp[1]);
		}
		else {
			filetypes[filetypeTemp[1]]++;
		}
	}
	for (auto &files : fileOrder) {
		cout << files << " " << filetypes[files] << endl;
	}
}
