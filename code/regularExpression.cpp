//
// Created by Raymond Li on 2019-03-07.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

//bool isMatch(string s, string p) {
//    if (p.empty()) return s.empty();
//    if (s.empty()) return p.empty() || (p.at(0) == '*' && isMatch(s, p.substr(1)));
//    char a = s.at(0);
//    char b = p.at(0);
//    if (b == '.' || a == b) return isMatch(s.substr(1), p.substr(1)) || (p.at(1) == '*' && isMatch(s.substr(1), p.substr(2)));
//    else if (p.at(1) == '*') return isMatch(s.substr(1), p.substr(2)) || isMatch(s.substr(1), p);
//    return false;
//}

bool inline match(char p, char s) {
    return (p == '.' || p == s);
}

bool isMatch(string s, string p) {
    int m = s.size(), n = p.size();
    vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
    dp[0][0] = true;
    for (int i = 0; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (p[j - 1] == '*') {
                dp[i][j] = dp[i][j - 2] || (i && dp[i - 1][j] && (s[i - 1] == p[j - 2] || p[j - 2] == '.'));
            } else {
                dp[i][j] = i && dp[i - 1][j - 1] && (s[i - 1] == p[j - 1] || p[j - 1] == '.');
            }
        }
    }
    return dp[m][n];
}