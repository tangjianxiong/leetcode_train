
struct ListNode
{
    int val;
    struct ListNode *next;
};
struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode *res;
    struct ListNode *p = res;
    struct ListNode *p1 = l1;
    struct ListNode *p2 = l2;
    res = (struct ListNode *)malloc(sizeof(struct ListNode));
    res->next == NULL;
    int carry = 0;
    while (p1 || p2)
    {
        p->val = carry + p1->val + p2->val;
        p->next = (struct ListNode *)malloc(sizeof(struct ListNode));
        p = p->next;
        p1 = p1->next;
        p2 = p2->next;
    }
    return res;
}