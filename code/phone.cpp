//
// Created by Raymond Li on 2019-02-05.
//
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void getCom(string source, map<char,string>&phone, vector<string>&res, int pos) {
    if (pos < 0)
        return;
    char a = source.at(pos);
    string range = phone[a];
    if (a == '1') {
        range = "*";
        return;
    }
    vector<string> tt = res;
    for (int i = 0; i < range.length(); ++i) {
        char t = range.at(i);
        if (tt.size() > 0) {
            for (long j = 0; j < tt.size(); ++j) {
                string temp = tt.at(j);
                res.push_back(t + temp);
            }
        }
        else {
            string tq;
            tq += t;
            res.push_back(tq);
        }
    }
    for (int i = 0; i < tt.size(); ++i) {
        res.erase(res.begin());
    }
    if (pos - 1 >= 0)
        getCom(source, phone, res, pos - 1);
    return;
}

vector<string> letterCombinations(string digits) {
    map<char, string> phone;
    phone['2']= "abc";
    phone['3']= "def";
    phone['4']= "ghi";
    phone['5']= "jkl";
    phone['6']= "mno";
    phone['7']= "pqrs";
    phone['8']= "tuv";
    phone['9'] = "wxyz";
    int l = digits.length();
    vector<string>res;
    getCom(digits, phone, res, l - 1);
//    cout << res.size() << endl;
    return res;
}

//int main () {
//    vector<string> test = letterCombinations("234");
//    for (int i = 0; i < test.size(); ++i) {
//        cout << test[i] << " ";
//    }
//}