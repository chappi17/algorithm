#include <iostream>

using namespace std;

class Node
{
public:
	// Node has Value, left pointer, right pointer 
	int Value;
	Node* Left;
	Node* Right;

	Node(int value)
	{
		this->Value = value;
		Left = nullptr;
		Right = nullptr;
	}
};

class BinarySearchTree
{
public:
	Node* root;
public:
	BinarySearchTree()
	{
		root = nullptr;
	}

	//요소 삽입
	// 기준이 되는 노드 만들고, temp 만들어서 비교해나가기,
	// 왼쪽은 기준보다 작게, 오른쪽은 크게 
	bool Insert(int value)
	{
		Node* newNode = new Node(value);
		if (root == nullptr)
		{
			root = newNode;
			return true;
		}
		Node* temp = root;

		while (true)
		{
			if (newNode->Value == temp->Value)
			{
				return false;
			}

			if (newNode->Value < temp->Value)
			{
				if (temp->Left == nullptr)
				{
					temp->Left = newNode;
					return true;
				}
				temp = temp->Left;
			}
			else
			{
				if (temp->Right == nullptr)
				{
					temp->Right = newNode;
					return true;
				}
				temp = temp->Right;
			}
		}

	}
	// 요소 찾는 기능
	bool Contains(int value)
	{
		if (root == nullptr)
		{
			return false;
		}
		
		Node* temp = root;
		while (temp)
		{
			if (value < temp->Value)
			{
				temp = temp->Left;
			}
			else if (value > temp->Value)
			{
				temp = temp->Right;
			}
			else
			{
				return true;
			}
		}
		return false;

	}


};

int main()
{
	BinarySearchTree* BST = new BinarySearchTree();

	cout << "Root: " << BST->root << endl;
	BST->Insert(47);
	BST->Insert(21);
	BST->Insert(76);
	BST->Insert(18);
	BST->Insert(52);
	BST->Insert(82);

	BST->Insert(27);

	cout << BST->root->Left->Right->Value << endl;

	cout << BST->Contains(27) << endl;
	cout << BST->Contains(17) << endl;
	return 0;
}