#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

 struct ListNode 
 { 
     int val;
     struct ListNode *next;
 };
 
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) 
{
    // write code here
    struct ListNode* slow = pListHead;
    struct ListNode* fast = slow;
    for (int i = 0; i < k; i++)
    {
        if (fast == NULL)
        {
            slow = NULL;
            return slow;
        }
        fast = fast->next;
    }
    while (fast)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;

}