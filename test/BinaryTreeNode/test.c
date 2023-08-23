#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTreeNode.h"

int main()
{
	BinaryTreeNode* root = creatBinaryTree();
	printf("%d" , binaryTreeFind(root, 3)->data);

	system("pause");

	return 0;
}