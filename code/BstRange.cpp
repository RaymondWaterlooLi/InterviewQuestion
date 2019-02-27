//
// Created by Raymond Li on 2019-02-25.
//

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

struct node {
    int value;
    struct node* left;
    struct node* right;
};

int count(struct node* t, int min, int max) {
    int num = t->value;
    if (t == null) return 0;
    if (num < min)
    {
        return count(t->right, min, max);
    }
    else if (num > max)
    {
        return count(t->left,min,max);
    }
    return count(t->left, min, max) + counter(t->right, min, max) + 1;
}