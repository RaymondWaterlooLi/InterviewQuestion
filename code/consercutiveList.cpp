//
// Created by Raymond Li on 2019-02-27.
//

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <list>
#include <vector>
#include <algorithm>

/*
 * This is the most brilliant solution I have ever seen.
 * The core idea is using dynamic programming but it add a creative thinking which is change/modify
 * previous value in the table. It links serval values together to become a consercutive list if it exists.
 */

using namespace std;

int findLongestConsercutiveList(vector<int> nums) {
    map<int, int> d;
    int r = 0;
    for (int i : nums)
    {
        if (d[i]) continue;
        r = max(r, d[i] = d[i + d[i+1]] = d[i - d[i-1]] = d[i-1] + d[i+1] + 1);
    }
    return r;
}
