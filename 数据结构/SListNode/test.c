#define _CRT_SECURE_NO_WARNINGS 1
#include"SListNode.h"

int main()
{
	SListNode* plist = NULL;
	sListPushBack(&plist, 1);
	sListPushBack(&plist, 2);
	sListPushBack(&plist, 3);
	sListPushBack(&plist, 4);
	sListPopBack(&plist);
	sListPopFront(&plist);

	sListInsertAfter(sListFind(plist, 2) , 0);
	sListEraseAfter(sListFind(plist, 2));

	sListPrint(plist);

	system("pause");
	return 0;
}