////
//// Created by Raymond Li on 2019-03-05.
////
//
//#include <iostream>
//
//struct Node {
//    int val;
//    Node* next;
//    Node(int x) : val(x), next(NULL) {}
//};
//
//using namespace std;
//
//int main () {
//    Node* a = new Node(0);
//    Node* b = a;
//    a->next = new Node(1);
//    a->next->next = new Node(2);
//    while (b) {
//        cout << b->val << " ";
//        b = b->next;
//    }
//}