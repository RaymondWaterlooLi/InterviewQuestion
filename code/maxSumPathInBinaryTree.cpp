//
// Created by Raymond Li on 2019-03-11.
//

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int x): val(x), left(NULL), right(NULL){}
};

int hf(TreeNode* t, int & re) {
    if (!t) return 0;
    int l = hf(t->left, re);
    int r = hf(t->right, re);
    if (l < 0)
        l = 0;
    if (r < 0)
        r = 0;
    if (l + r + t->val > re) re = l + r + t->val;
    return t->val += max(l,r);
}
int maxPathSum(TreeNode* t){
    int kk = INT_MIN;
    int f = hf(t, kk);
    return kk;
}

