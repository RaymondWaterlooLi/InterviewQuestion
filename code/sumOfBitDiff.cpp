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

using namespace std;

/*
 * Solution:
 * Each integer is 32bit number indeed. So at each position of 32 bits, there could be different bits.
 * For each position, we could use a counter to get all numbers in the array who has 1 at that position.
 * Then (n - counter) numbers will be 0 at that position. There are (n - counter) * counter  * 2 permutations.
 */

int sumBitDifference(vector<int> arr, int n ) {
    int ans = 0;
    for (int i = 0; i < 32; ++i)
    {
        int counter = 0;
        for (int j = 0; j < n; ++j) {
            if (arr[j] && (1 << i)) {
                counter++;
            }
        }
        ans += (n-counter) * counter * 2;
    }
    return ans;
}