#include <bits/stdc++.h>
using namespace std;

int main() {
	int cases; cin >> cases;
    for (int i = 0; i < cases; i++) {
        vector<string> grid;
        int row, column; cin >> row >> column;
        int hashCount = 0;
        int longestRow = 0;
        cin.ignore();
        for (int g = 0; g < row; g++) {
            string curRow; getline(cin, curRow);
            if (count(curRow.begin(), curRow.end(), '#') > hashCount) {
                hashCount = count(curRow.begin(), curRow.end(), '#');
                longestRow = g;
            }
            grid.push_back(curRow);   
        }
        cout << longestRow+1 << " ";
        int hashMiddle = (hashCount / 2) + 1;
        int newHashCount = 0;
        int middleCol = 0;
        for (int b = 0; b < grid[longestRow].size(); b++) {
            if (grid[longestRow][b] == '#') {
                newHashCount++;
            }
            if (newHashCount == hashMiddle) {
                middleCol = b+1;
                newHashCount++;
            }
        }
        cout << middleCol << endl;
    }
}