#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

 struct ListNode {
     int val;
     struct ListNode *next;
 };
 
struct ListNode* detectCycle(struct ListNode* head) {

    struct ListNode* slow, * fast;
    slow = fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            struct ListNode* meet = slow;
            while (meet != head)
            {
                meet = meet->next;
                head = head->next;
            }
            return meet;
        }
    }
    return NULL;
}