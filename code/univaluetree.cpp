//
// Created by Raymond Li on 2019-02-13.
//

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <list>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

void dfs() {
}

int longestPath(vector<int> a, vector<int> e) {
    int size = a.size();
    unordered_map<int, vector<int>> tree;
    bool visited[size];
    for (int i = 0; i < size; ++i) {
        visited[i] = false;
    }
    for (int i = 0; i < e.size(); ++i) {
        int n1 = e[i];
        int n2 = e[i + 1];
        if (a[n1] == a[n2]) {
            tree[n1].push_back(n2);
            tree[n2].push_back(n1);
        }
    }
}


