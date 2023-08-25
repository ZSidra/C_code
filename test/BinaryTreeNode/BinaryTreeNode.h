#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"Queue.h"

typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BinaryTreeNode;

BinaryTreeNode* creatBinaryTree();

void preOrder(BinaryTreeNode* root);
// 二叉树中序遍历
void inOrder(BinaryTreeNode* root);
// 二叉树后序遍历
void postOrder(BinaryTreeNode* root);

int binaryTreeSize(BinaryTreeNode* root);

int binaryTreeLeafSize(BinaryTreeNode* root);

int BinaryTreeLevelKSize(BinaryTreeNode* root, int k);

BinaryTreeNode* binaryTreeFind(BinaryTreeNode* root, BTDataType x);

int binaryTreeDepth(BinaryTreeNode* root);

void BinaryTreeDestory(BinaryTreeNode* root);

void LevelOrder(BinaryTreeNode* root);

int BinaryTreeComplete(BinaryTreeNode* root);