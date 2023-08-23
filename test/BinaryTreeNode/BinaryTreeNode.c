#include"BinaryTreeNode.h"

BinaryTreeNode* BuyNode(BTDataType data)
{
	BinaryTreeNode* newnode = (BinaryTreeNode*)malloc(sizeof(BinaryTreeNode));
	if (newnode == NULL)
	{
		perror("malloc");
		exit(0);
	}
	newnode->data = data;
	newnode->left = newnode->right = NULL;
	return newnode;
}

//��ʱ�������ݽṹ
BinaryTreeNode* creatBinaryTree()
{
	BinaryTreeNode* node1 = BuyNode(1);
	BinaryTreeNode* node2 = BuyNode(2);
	BinaryTreeNode* node3 = BuyNode(3);
	BinaryTreeNode* node4 = BuyNode(4);
	BinaryTreeNode* node5 = BuyNode(5);
	BinaryTreeNode* node6 = BuyNode(6);
	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;
	return node1;
}

void preOrder(BinaryTreeNode* root)
{
	if (root == NULL)
	{
		return;
	}

	printf("%d ", root->data);
	preOrder(root->left);
	preOrder(root->right);
}
// �������������
void inOrder(BinaryTreeNode* root)
{
	if (root == NULL)
	{
		return;
	}

	inOrder(root->left);
	printf("%d ", root->data);
	inOrder(root->right);
}
// �������������
void postOrder(BinaryTreeNode* root)
{
	if (root == NULL)
	{
		return;
	}

	postOrder(root->left);
	postOrder(root->right);
	printf("%d ", root->data);
}

int binaryTreeSize(BinaryTreeNode* root)
{
	return root == NULL ? 0 : 
		binaryTreeSize(root->left) + binaryTreeSize(root->right) + 1;
}

int binaryTreeLeafSize(BinaryTreeNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return (root->left == NULL && root->right == NULL) ? 1 : 
		binaryTreeLeafSize(root->left) + binaryTreeLeafSize(root->right);
}

int BinaryTreeLevelKSize(BinaryTreeNode* root, int k)
{
	if (root == NULL)
	{
		return 0;
	}
	if (k == 1)
	{
		return 1;
	}
	return BinaryTreeLevelKSize(root->left, k - 1) + BinaryTreeLevelKSize(root->right, k - 1);
}

BinaryTreeNode* binaryTreeFind(BinaryTreeNode* root, BTDataType x)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (root->data == x)
	{
		return root;
	}
	BinaryTreeNode* ret = binaryTreeFind(root->left, x);
	if (ret)
		return ret;
	return binaryTreeFind(root->right, x);
}