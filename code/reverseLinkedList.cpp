//
// Created by Raymond Li on 2019-01-26.
//


#include <iostream>

using namespace std;

struct node {
    int num;
    node* next;
};

void reverseList(node* t, node* prev) {
    while (t != NULL) {
        node* temp = t->next;
        t->next = prev;
        prev = t;
        t = temp;
    }
}

//int main() {
////    cout << "hey" << endl;
//    node* f1 = new node{1,NULL};
//    node* f2 = new node{2,NULL};
//    node* f3 = new node{3,NULL};
//    f1->next = f2;
//    f2->next = f3;
//    reverseList(f1, NULL);
//    while (f3 != NULL) {
//        cout << f3->num << endl;
//        f3 = f3->next;
//    }
//}