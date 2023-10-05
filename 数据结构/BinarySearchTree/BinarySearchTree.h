#pragma once

namespace Z
{
	template<class K>
	struct BinarySearchTreeNode
	{
		BinarySearchTreeNode* m_left;
		BinarySearchTreeNode* m_right;
		K m_key;

		BinarySearchTreeNode(const K& key)
			:m_left(nullptr),
			m_right(nullptr),
			m_key(key)
		{
			;
		}
	};

	template<class K>
	class BinarySearchTree
	{
		typedef BinarySearchTreeNode<K> Node;
	public:
		BinarySearchTree()
			:m_root(nullptr)
		{}

		BinarySearchTree(const BinarySearchTree<K>& bst)
		{
			copy(bst->m_root);
		}

		BinarySearchTree<K>& operator=(BinarySearchTree<K> bst)
		{
			swap(m_root, bst.m_root);

			return *this;
		}

		bool find(const K& key)const
		{
			Node* cur = m_root;
			while (cur)
			{
				if (cur->m_key < key)
					cur = cur->m_right;
				else if (cur->m_key > key)
					cur = cur->m_left;
				else
					return true;
			}

			return false;
		}

		bool insert(const K& key)
		{
			if (m_root == nullptr)
			{
				m_root = New Node(key);
				return true;
			}

			Node* parent = nullptr;
			Node* cur = m_root;
			while (cur)
			{
				if (cur->m_key < key)
				{
					parent = cur;
					cur = cur->m_right;
				}
				else if (cur->m_key > key)
				{
					parent = cur;
					cur = cur->m_left;
				}
				else
				{
					return false;
				}
			}

			cur->m_key = new Node(key);

			if (parent->m_key < key)
				parent->m_left = cur;
			else
				parent->m_left = cur;

			return true;
		}

		bool erase(const K& key)
		{
			Node* parent = nullptr;
			Node* cur = m_root;
			while (cur)
			{
				if (cur->m_key < key)
				{
					parent = cur;
					cur = cur->m_right;
				}
				else if (cur->m_key > key)
				{
					parent = cur;
					cur = cur->m_left;
				}
				else
				{
					
					if (cur->m_left == nullptr)
					{
						if (cur = m_root)
							m_root = cur->m_right;

						if (parent->m_left == cur)
							parent->m_left = cur->m_right;
						else
							parent->m_right = cur->m_right;

						delete cur;
					}
					else if (cur->m_right == nullptr)
					{
						if (cur = m_root)
							m_root = cur->m_left;

						if (parent->m_left == cur)
							parent->m_left = cur->m_left;
						else
							parent->m_right = cur->m_left;

						delete cur;
					}
					else
					{
						Node* pminright = cur;
						Node* minright = cur->m_right;
						while (minright)
						{
							pminright = minright;
							minright = minright->m_left;
						}

						cur->m_key = minright->m_key;

						if (pminright->m_left == minright)
							pminright->m_left = minright->m_right;
						else
							pminright->m_right = minright->m_right;

						delete minright;
					}

					return true;
				}
			}

			return false;
		}

		bool findR(const K& key)const
		{
			_findR(m_root, key);
		}

		bool insertR(const K& key)
		{
			_insertR(m_root, key);
		}

		bool eraseR(const K& key)
		{
			_eraseR(m_root, key);
		}

		void inOrder()const
		{
			_inOrder(m_root);
			cout << endl;
		}

		~BinarySearchTree()
		{
			destroy();
		}

	protected:
		Node* copy(Node* root)
		{
			if (root == nullptr)
				return root;

			Node* newnode = new Node(root->m_key);
			newnode->m_left = copy(root->m_left);
			newnode->m_right = copy(root->m_right);

			return newnode;
		}

		bool _findR(Node* root, const K& key)const
		{
			if (root == nullptr)
				return false;

			if (root->m_key == key)
				return true;

			if (root->m_key < key)
				return _findR(root->m_right, key);
			else
				return _findR(root->m_left, key);
		}

		bool _insertR(Node*& root, const K& key)
		{
			if (root == nullptr)
			{
				root = new Node(key);
				return true;
			}

			if (root->m_key < key)
				return _findR(root->m_right, key);
			else if (root->m_key > key)
				return _findR(root->m_left, key);
			else
				return false;
		}

		bool _eraseR(Node*& root, const K& key)
		{
			if (root == nullptr)
				return false;

			if (root->m_key < key)
				return _findR(root->m_right, key);
			else if (root->m_key > key)
				return _findR(root->m_left, key);
			else
			{
				Node* del = root;

				if (root->m_left == nullptr)
					root = root->m_right;
				else if (root->m_right == nullptr)
					root = root->m_left;
				else
				{
					Node* minright = root->m_right;

					while (minright)
						minright = minright->m_left;

					swap(del->m_key, minright->m_key);

					return _eraseR(root->m_right, key);
				}

				delete del;

				return ture;
			}
		}

		void _inOrder(const Node* root)const
		{
			if (root == nullptr)
				return;

			_inOrder(root->m_left);

			cout << root->m_key << " ";

			_inOrder(root->m_right);
		}

		void destroy(Node*& root)
		{
			if (root == nullptr)
				return;

			destroy(root->m_left);
			destroy(root->m_right);

			delete root;
			root = nullptr;
		}

	private:
		Node* m_root;
	};
}