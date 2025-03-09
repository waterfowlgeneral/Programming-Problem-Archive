#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

vector<string> split(string s, string delim) {
    vector<string> tokens;
    int index = s.find(delim);
    
    while (index != string::npos){
        string token = s.substr(0,index);
        tokens.push_back(token);
        s = s.substr(index + delim.size());
        index = s.find(delim);
    }
    tokens.push_back(s);
    return tokens;
}

int main() {
    
    int cases; cin >> cases;
    string temp; getline(cin, temp);
    
    for (int i = 0; i < cases; i++) {
        
        string school; getline(cin, school);
        int studentnum; cin >> studentnum;
        
        vector<string> students;
        vector<int> totalCreditHours;
        vector<double> GPAs;
        string temp2; getline(cin, temp2);
        
        for (int j = 0; j < studentnum; j++) {
            
            string fullinput; getline(cin, fullinput);
            vector<string> namesplit = split(fullinput, ":");
            vector<string> studentCourses = split(namesplit[1], ",");
            int currentTotalCredits = 0;
            int gradesTimesCreditHours = 0;
            
            for (int k = 0; k < studentCourses.size(); k++) {
                int currentCourseCredit = int(studentCourses[k][1] - '0');
                currentTotalCredits += currentCourseCredit;
                if (studentCourses[k][0] == 'A') {
                    gradesTimesCreditHours += (4 * currentCourseCredit);
                }
                else if (studentCourses[k][0] == 'B') {
                    gradesTimesCreditHours += (3 * currentCourseCredit);
                }
                else if (studentCourses[k][0] == 'C') {
                    gradesTimesCreditHours += (2 * currentCourseCredit);
                }
                else if (studentCourses[k][0] == 'D') {
                    gradesTimesCreditHours += currentCourseCredit;
                }
            }
            
            students.push_back(namesplit[0]);
            totalCreditHours.push_back(currentTotalCredits);
            GPAs.push_back((gradesTimesCreditHours*1.0)/currentTotalCredits);
            
        }
        
        string highestStudent = students[0];
        double highestGPA = GPAs[0];
        int highestCredits = totalCreditHours[0];
        
        for (int b = 1; b < students.size(); b++) {
            if (highestGPA < GPAs[b]) {
             
                highestStudent = students[b];
                highestGPA = GPAs[b];
                highestCredits = totalCreditHours[b];
            
            }
            else if (highestGPA == GPAs[b]) {
                if (highestCredits < totalCreditHours[b]) {
                    
                    highestStudent = students[b];
                    highestGPA = GPAs[b];
                    highestCredits = totalCreditHours[b];
                    
                }
            }
        }
        
        cout << school << " = " << highestStudent << endl;
    }
}