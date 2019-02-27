//
// Created by Raymond Li on 2019-02-08.
//


#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;


void nextPermutation(vector<int>& nums) {
    int k = nums.size()  - 1;
    for (int i = nums.size() - 1; i >= 0; --i) {
        if (i - 1 >= 0) {
            if (nums[i-1] < nums[i]) {
                while (k  >  i - 1) {
                    if (nums[k] > nums[i-1])
                        break;
                    --k;
                }
                iter_swap(nums.begin() + k, nums.begin() + i -1);
                //cout << k << " " << i - 1 << endl;
                reverse(nums.begin() + i, nums.end());
                return;
            }
        }
    }
    reverse(nums.begin(), nums.end());
}