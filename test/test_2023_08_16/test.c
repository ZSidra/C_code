#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

 struct ListNode
 {
     int val;
     struct ListNode *next;
 };
 
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* ret = NULL;
    struct ListNode* newlist = NULL;
    struct ListNode* tail1 = list1;
    struct ListNode* tail2 = list2;
    if (tail1 == NULL)
    {
        return list2;
    }
    else if (tail2 == NULL)
    {
        return list1;
    }
    if (tail1->val > tail2->val)
    {
        newlist = tail2;
        tail2 = tail2->next;
    }
    else
    {
        newlist = tail1;
        tail1 = tail1->next;
    }
    ret = newlist;
    while (tail1 && tail2)
    {
        if (tail1->val > tail2->val)
        {
            newlist->next = tail2;
            tail2 = tail2->next;
        }
        else {
            newlist->next = tail1;
            tail1 = tail1->next;
        }
        newlist = newlist->next;
    }

    if (tail1 == NULL)
    {
        newlist->next = tail2;
    }
    else if (tail2 == NULL)
    {
        newlist->next = tail1;
    }
    return ret;
}