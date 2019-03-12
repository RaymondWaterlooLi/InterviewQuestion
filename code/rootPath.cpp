//
// Created by Raymond Li on 2019-03-07.
//

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int a): val(a), left(NULL), right(NULL){}
};


int getRootPath(Node* root) {
    queue<Node*> q;
    q.push(root);
    int res = 0;
    while (!q.empty()) {
        Node* f = q.front();
        q.pop();
        int v = f->val;
        if (f->left != NULL){
            f->left->val = v * 10 + f->left->val;
            q.push(f->left);
        }
        if (f->right != NULL){
            f->right->val = v*10 + f->right->val;
            q.push(f->right);
        }
        if (f->left == NULL && f->right == NULL) {
            res += v;
        }
    }
    return res;
}

//int main()
//{
//    struct Node *root = new Node(6);
//    root->left        = new Node(3);
//    root->right       = new Node(5);
//    root->left->left  = new Node(2);
//    root->left->right = new Node(5);
//    root->right->right = new Node(4);
//    root->left->right->left = new Node(7);
//    root->left->right->right = new Node(4);
//    cout << getRootPath(root) << endl;
//    return 0;
//}