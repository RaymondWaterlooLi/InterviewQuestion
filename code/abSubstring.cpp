//
// Created by Raymond Li on 2019-02-12.
//
/*
 * A has n chars, B has m chars. How many times A need to be repeated to contain B. OW, -1.
 */

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <list>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int repeat(string a, string b) {
    int n = a.length();
    int m = b.length();
    string x;
    string y;
    int counter = 0;
    while (x.length() < y.length()) {
        x = x + a;
        counter++;
    }
    while (x.find(b) == string::npos) {
        if (x.length() > m + n ) {
            return -1;
        }
        x = x + a;
        counter++;
    }
    return counter;
}

//int main() {
//    cout << repeat("abcd", "cdabcdab") << endl;
//    cout << repeat("abcd", "abcd") << endl;
//    cout << repeat("a", "ab") << endl;
//    cout << repeat("abbb", "ab") << endl;
//    cout << repeat("abcd", "bcdabcdabcda") << endl;
//}