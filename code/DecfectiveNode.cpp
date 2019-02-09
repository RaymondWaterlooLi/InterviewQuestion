//
// Created by Raymond Li on 2019-01-26.
//

/*
 *  Question:
    Consider a binary tree, where an arbitary node has 2 parents i.e two nodes in the tree have the same child.

    Identify the defective node with 2 parents.
    Correct such a node and restore the binary tree properties to that node.
 */


#include <iostream>
#include <unordered_set>

using namespace std;

struct node {
    int num;
    node* left;
    node* right;
};

using namespace std;

void find(node* t, unordered_set<node*> visited) {
    if (t == NULL) return;
    if (t->left != NULL) {
        if (visited.find(t->left) != visited.end()){
            cout << "This is the wrong code" << t->num << endl;
            t->left = NULL;
        }
        else {
            visited.insert(t->left);
            find(t->left, visited);
        }
    }
    else if (t->right != NULL) {
        if (visited.find(t->right) != visited.end()){
            cout << "This is the wrong code" << t->num << endl;
            t->right = NULL;
        }
        else {
            visited.insert(t->right);
            find(t->right, visited);
        }
    }
}