#include <bits/stdc++.h>
using namespace std;

int main() {
	
	// create key-value dictionary
	map<string, string> dictionary;
	dictionary["taco"] = "noun: mexican sandwich";
	dictionary["computer"] = "noun: an electric box";

	// print item using key
	cout << dictionary["taco"] << endl;

	// print keys & values of dictionary
	for (auto &item : dictionary) {
		cout << item.first << " - " << item.second << endl;
	}

	/*
	// print numbers quicker 
	for (auto &number : numbers) {
		cout << number << endl;	
	}
	*/
}
