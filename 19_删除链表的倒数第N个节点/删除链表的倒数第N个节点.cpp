#include<iostream>

using namespace std;



struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode* p = head;
        ListNode* pn = head;
        while (n--) {
            pn = pn->next;
        }

        if(pn==NULL)
            return head->next;
        while (pn->next != NULL) {
            p=p->next;
            pn = pn->next;
        }
        //此时p指向倒数第n节点的前置节点
        p->next=p->next->next;
        return head;
    }
};