#define _CRT_SECURE_NO_WARNINGS 1
#include"ListNode.h"

int main()
{
	ListNode* plist = listCreate();
	listPushBack(plist , 2);
	listPushBack(plist , 3);
	listPushBack(plist , 4);
	listPushFront(plist, 1);
	listInsert(plist, listFind(plist , 1) , 0);
	listErase(plist, listFind(plist, 4));
	listPopBack(plist);
	listPopFront(plist);
	listDestory(&plist);

	listPrint(plist);

	system("pause");
	return 0;
}