#pragma once
#include<iostream>
using namespace std;

template<class K , class V>
struct AVLTreeNode
{
	AVLTreeNode<K, V>* m_left;
	AVLTreeNode<K, V>* m_right;
	AVLTreeNode<K, V>* m_parent;
	pair<K, V> m_data;
	int m_bf;

	AVLTreeNode(const pair<K, V>& data)
		:m_left(nullptr)
		, m_right(nullptr)
		, m_parent(nullptr)
		, m_data(data)
		, m_bf(0)
	{
		;
	}
};

template<class K , class V>
class AVLTree
{
	typedef AVLTreeNode<K, V> Node;
public:
	insert(const pair<K, V>& data)
	{
		Node* parent = nullptr;
		Node* cur = m_root;

		while (cur)
		{
			if (cur->m_data.first > data.first)
			{
				parent = cur;
				cur = cur->m_left;
			}
			else if (cur->m_data.first < data.first)
			{
				parent = cur;
				cur = cur->m_right;
			}
			else
			{
				return false;
			}
		}

		cur = new Node(data);
		if (parent->m_data.first > data.first)
			parent->m_left = cur;
		else
			parent->m_right = cur;
		cur->m_parent = parent;

		while (parent)
		{
			if (parent->m_left == cur)
				parent->m_bf--;
			else
				parent->m_bf++;

			if (parent->m_bf == 0)
				break;
			else if (parent->m_bf == 1 || parent->m_bf == -1)
			{
				cur = cur->m_parent;
				parent = parent->m_parent;
			}
			else if (parent->m_bf == 2 || parent->m_bf == -2)
			{
				//Ðý×ª
				if (parent->m_bf == 2 && cur->m_bf == 1)
					rotateL(parent);
				else if (parent->m_bf == -2 && cur->m_bf == -1)
					rotateR(parent);
				else if (parent->m_bf == 2 && cur->m_bf == -1)
					rotateRL(parent);
				else if (parent->m_bf == -2 && cur->m_bf == 1)
					rotateLR(parent);
				else
					assert(false);

				break;
			}
			else
				assert(false);
		}

		return true;
	}

protected:
	void rotateL(Node* parent)
	{
		Node* subR = parent->m_right;
		Node* subRL = subR->m_left;

		parent->m_right = subRL;
		if (subRL)
			subRL->m_parent = parent;

		subR->m_left = parent;
		Node* pparent = parent->m_parent;
		if (pparent)
		{
			if (pparent->m_left == parent)
				pparent->m_left = subR;
			else
				pparent->m_right = subR;

			subR->m_parent = pparent;
		}
		else
		{
			subR->m_parent = nullptr;
			m_root = subR;
		}
		parent->m_parent = subR;

		parent->m_bf = subR->m_bf = 0;
	}

	void rotateR(Node* parent)
	{
		Node* subL = parent->m_left;
		Node* subLR = subR->m_right;

		parent->m_left = subLR;
		if (subLR)
			subLR->m_parent = parent;

		subL->m_right = parent;
		Node* pparent = parent->m_parent;
		if (pparent)
		{
			if (pparent->m_left == parent)
				pparent->m_left = subL;
			else
				pparent->m_right = subL;

			subL->m_parent = pparent;
		}
		else
		{
			subL->m_parent = nullptr;
			m_root = subL;
		}
		parent->m_parent = subL;

		parent->m_bf = subL->m_bf = 0;
	}

	void rotateLR(Node* parent)
	{
		Node* subL = parent->m_left;
		Node* subLR = subL->m_right;

		rotateL(subL);
		rotateR(parent);

		if (subLR->m_bf == 1)
		{
			parent->m_bf = 0;
			subL->m_bf = -1;
			subLR->m_bf = 0;
		}
		else if (subLR->m_bf == -1)
		{
			parent->m_bf = 1;
			subL->m_bf = 0;
			subLR->m_bf = 0;
		}
		else if (subLR->m_bf == 0)
		{
			parent->m_bf = 0;
			subL->m_bf = 0;
			subLR->m_bf = 0;
		}
		else
			assert(false);
	}

	void rotateRL(Node* parent)
	{
		Node* subR = parent->m_right;
		Node* subRL = subR->m_left;

		rotateR(subR);
		rotateL(parent);

		if (subRL->m_bf == -1)i
		{
			parent->m_bf = 0;
			subR->m_bf = 1;
			subRL->m_bf = 0;
		}
		else if (subRL->m_bf == 1)
		{
			parent->m_bf = -1;
			subR->m_bf = 0;
			subRL->m_bf = 0;
		}
		else if (subRL->m_bf == 0)
		{
			parent->m_bf = 0;
			subR->m_bf = 0;
			subRL->m_bf = 0;
		}
		else
			assert(false);
	}

private:
	Node* m_root = nullptr;
};