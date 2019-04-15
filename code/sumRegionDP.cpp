//
// Created by Raymond on 2019/4/14.
//


#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> sums;
//This function is used to generate all sums within a rectangle area from (0,0) to (i,j)
void createSums(vector<vector<int>> &matrix) {
    row = matrix.size();
    col = row>0 ? matrix[0].size() : 0;
    sums = vector<vector<int>>(row+1, vector<int>(col+1, 0));
    for(int i=1; i<=row; i++) {
        for(int j=1; j<=col; j++) {
            sums[i][j] = matrix[i-1][j-1] +
            sums[i-1][j] + sums[i][j-1] - sums[i-1][j-1] ;
        }
    }
}

int rangeSum(int top1, int top2, int bot1, int bot2) {
    return sums[i][j] - sums[i-1][j] - sums[i][j-1] + sums[i-1][j-1];
}