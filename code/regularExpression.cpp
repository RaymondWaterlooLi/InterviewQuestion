//
// Created by Raymond Li on 2019-03-07.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

bool isMatch(string s, string p) {
    vector<vector<int>> d (s.length() + 1, vector<int>(p.length() + 1, 0));
    d[0][0] = 1;
    //empty string case (a*a*a*... could represent empty case)
    for (int i = 0; i < p.length(); ++i) {
        if (p[i] == '*' && d[0][i-1]) d[0][i+1] = 1;
    }
    for (int i = 0; i < s.length(); ++i) {
        for (int j = 0; j < p.length(); ++j) {
            if (p[j] == '.' || p[j] == s[i]) d[i+1][j+1]  = d[i][j];
            else if (p[j] == '*') {
                if (p[j-1] != s[i] && p[j-1] != '.') {
                    d[i+1][j+1] = d[i+1][j-1];
                }
                else d[i+1][j+1] = d[i+1][j-1] || d[i][j+1] || d[i+1][j];
            }
        }
    }

    return d[s.length()][p.length()];
}