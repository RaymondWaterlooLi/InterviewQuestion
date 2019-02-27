//
// Created by Raymond Li on 2019-02-12.
//

/*
 * There is a list of trees and there are two buckets, what is the largest subarray with at most two elements.
 */


#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <list>
#include <vector>
#include <algorithm>


using namespace std;

int totalFruit(vector<int>& tree) {
    int ma, i = 0;
    unordered_map<int, int> bucket;
    for (int j = 0; j < tree.size(); ++j) {
        bucket[tree[j]] ++;
        if (bucket.size() > 2) {
            bucket[tree[i]]--;
            if (bucket[tree[i]] == 0) bucket.erase(tree[i]);
            i++;
        }
        ma = max(ma, j-i+1);
    }
    return ma;
}