#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTreeNode.h"

int main()
{
	BinaryTreeNode* root = creatBinaryTree();
	printf("%d" , binaryTreeDepth(root));

	system("pause");

	return 0;
}