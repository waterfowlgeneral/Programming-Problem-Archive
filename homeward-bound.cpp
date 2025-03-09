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
		map<string, string> flights;
		int cases2; cin >> cases2;
		cin.ignore();
		vector<string> departures;
		for (int g = 0; g < cases2; g++) {
			string currentDest; getline(cin, currentDest);
			vector<string> tempFlights = split(currentDest, " ");
			flights[tempFlights[0]] = tempFlights[1];
			departures.push_back(tempFlights[1]);
		}
		string currentCity;
		for (int b = 0; b < departures.size(); b++) {
			if (flights.count(departures[b]) == 0) {
				currentCity = departures[b];
				cout << currentCity << endl;
			}
		}
		for (int s = 0; s < cases2; s++) {
			for (auto &cities : flights) {
				if (cities.second == currentCity) {
					cout << cities.first << endl;
					currentCity = cities.first;
				}
			}
		}
	}
}
