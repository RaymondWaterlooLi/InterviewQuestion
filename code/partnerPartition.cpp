//
// Created by Raymond Li on 2019-03-09.
//

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

/*
 * Binary search method
 * Time: O(n * log(sum(arr))
 */

int sum(vector<int> a ){
    int total = 0;
    for (int b : a) total += b;
    return total;
}

int findMinPartners(vector<int> a, int range) {
    int total = 0;
    int num = 1;
    for (int z : a) {
        total += z;
        if (total > range) {
            num++;
            total = z;
        }
    }
    return num;
}


int findMinTime(int k, vector<int> a) {
    int lo = * max_element(a.begin(), a.end());
    int hi = sum(a);
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        int m = findMinPartners(a, mid);
        if (m <= k) {
            hi = mid;
        }
        else{
            lo = mid + 1;
        }
    }
    return lo;
}

//
//int main()
//{
//    vector<int> arr { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//    int k = 3;
//    cout << findMinTime(k,arr) << endl;
//    return 0;
//}