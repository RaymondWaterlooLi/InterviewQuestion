//
// Created by Raymond Li on 2019-03-09.
//

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

double findKth(vector<int>& nums1, int a, vector<int>& nums2, int b, int k)
{
    int m = nums1.empty() ?  0 : nums1.size() ;
    int n = nums2.empty() ?  0 : nums2.size();
    if(a > nums1.size() - 1) return nums2[b + k - 1];
    if (b > nums2.size() - 1) return nums1[a + k - 1];
    if (k == 1) return min(nums1[a], nums2[b]);

    int m1 = INT_MAX;
    int m2 = INT_MAX;
    if (a + k/2 - 1 < nums1.size()) m1 = nums1[a + k/2 - 1];
    if (b + k/2 - 1 < nums2.size()) m2 = nums2[b + k/2 - 1];
    if (m1 < m2)
        return findKth(nums1, a + k/2, nums2, b, k - k /2);
    else
        return findKth(nums1, a, nums2, b + k/2, k - k/2);

}

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size();
    int n = nums2.size();
    int l = (m+n+1)/2;
    int r = (m+n+2)/2;
    return (findKth(nums1, 0, nums2, 0, l) + findKth(nums1, 0, nums2, 0, r)) / 2.0;
}