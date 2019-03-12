//
// Created by Raymond Li on 2019-02-27.
//

#include <iostream>
#include <stack>

using namespace std;

bool isValid(string s) {
    if (s.empty())
        return true;
    stack<char> q;
    for (char a : s) {
        if (a == '(' || a == '[' || a == '{'){
            q.push(a);
        }
        else {
            if (q.empty()) return false;
            char b = q.top();
            q.pop();
            if (b == '{') {
                if (a != '}') return false;
            }
            else if (b == '(') {
                if (a != ')') return false;
            }
            else if (a != ']') return false;
        }
    }
    if (!q.empty()) return false;
    return true;
}
