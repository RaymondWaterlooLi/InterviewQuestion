////
//// Created by Raymond Li on 2019-03-05.
////
//
///*
// * Key:
// * 1.  Initialize a priority_queue: priority_queue<ListNode*, vector<ListNode*>, LessThan>
// * 2.  compare objects and less than: lhs > rhs
// */
//
//#include <iostream>
//#include <vector>
//#include <map>
//#include <unordered_map>
////#include <priority_queue>
//#include <list>
//
//using namespace std;
//
//
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
//
//
//    struct LessThan
//    {
//        bool operator()(const ListNode* lhs, const ListNode* rhs) const
//        {
//            return lhs->val > rhs->val;
//        }
//    };
//
//    ListNode* mergeKLists(vector<ListNode*>& lists) {
//        priority_queue<ListNode*, vector<ListNode*>, LessThan> q;
//        for (ListNode* a : lists){
//            if (a)
//                q.push(a);
//        }
//        ListNode* hey = new ListNode(0);
//        ListNode* curr = hey;
//        while (!q.empty()) {
//            curr -> next = q.top();
//            curr = q.top();
//            q.pop();
//            if (curr->next != NULL)
//                q.push(curr->next);
//        }
//        curr -> next = NULL;
//        return hey->next;
//    }