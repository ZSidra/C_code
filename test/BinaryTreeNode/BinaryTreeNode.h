#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BinaryTreeNode;

BinaryTreeNode* creatBinaryTree();

void preOrder(BinaryTreeNode* root);
// �������������
void inOrder(BinaryTreeNode* root);
// �������������
void postOrder(BinaryTreeNode* root);

int binaryTreeSize(BinaryTreeNode* root);

int binaryTreeLeafSize(BinaryTreeNode* root);

int BinaryTreeLevelKSize(BinaryTreeNode* root, int k);

BinaryTreeNode* binaryTreeFind(BinaryTreeNode* root, BTDataType x);