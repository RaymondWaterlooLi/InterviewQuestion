//
// Created by Raymond Li on 2019-03-02.
//
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <list>

using namespace std;

string longestPalindrome(string s) {
    if (s.empty())
        return s;
    if (s.length() == 1)
        return s;
    int l = s.length();
    int d[l][l];
    for(int i = 0; i < l; ++i) {
        for (int j = 0; j < l; ++j) {
            d[i][j] = 0;
        }
    }
    int left = 0;
    int right = 0;
    int m = 0;
    for (int i = l - 1; i >= 0; --i) {
        for (int j = i; j < l; ++j) {

            if (j - i >= 3){
                d[i][j] = (d[i+1][j-1] && (s[i] == s[j]));
            }
            else {
                d[i][j] = (s[i] == s[j]);
            }


            if (d[i][j]) {
                m = max(m, j - i + 1);
                if (m == j - i + 1) {
                    // cout << i << " " << j << endl;
                    left = i;
                    right = j;
                }
            }
        }
    }
    //cout << "hey" << endl;
    string res = "";
    // cout << left << " " << right << endl;
    res = s.substr(left,m);
    return res;
}