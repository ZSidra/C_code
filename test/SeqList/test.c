#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

int main()
{
	SeqList s;
	seqListInit(&s);
	seqListPushBack(&s, 1);
	seqListPushBack(&s, 2);
	seqListPushBack(&s, 3);
	seqListPushBack(&s, 4);
	seqListPushBack(&s, 5);
	seqListPushFront(&s, 0);
	seqListPopBack(&s);
	seqListPopFront(&s);
	seqListInsert(&s, 3, 9);
	seqListErase(&s, 3);
	seqListErase(&s, 3);
	printf("ÏÂ±êÎª£º%d\n", seqListFind(&s, 2));

	seqListPrint(&s);

	system("pause");
	return 0;
}