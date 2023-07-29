#include <iostream>

using namespace std;

struct Node
{
	int Data;
	Node* prevNode;
	Node* nextNode;
};

class DoubleLinkedList
{
	Node* head;

public:
	DoubleLinkedList() : head(NULL) {}
	~DoubleLinkedList()
	{
		while (head)
		{
			Node* next = head->nextNode;
			delete head;
			head = next;
		}
	}

	void push_back(int data)
	{
		Node* newNode = new Node{ data, NULL, NULL };

		if (head == NULL)
		{
			head = newNode;
		}
		else
		{
			Node* temp = head;
			while (temp->nextNode != NULL)
			{
				temp = temp->nextNode;
			}
			temp->nextNode = newNode;
			newNode->prevNode = temp;
		}
	}

	void print()
	{
		Node* temp = head;
		while (temp != NULL)
		{
			cout << temp->Data << " ";
			temp = temp->nextNode;
		}
		cout << endl;
	}

	void print_backward() // 
	{
		Node* temp = head;
		while (temp->nextNode != NULL)
		{
			temp = temp->nextNode;
		}

		while (temp != NULL)
		{
			cout << temp->Data << " ";
			temp = temp->prevNode;
		}
		cout << endl;
	}

	int Get(int index) // ���° �ε����� ���� �����Ͱ� �ִ��� 
	{
		Node* temp = head;
		int count = 0;
		while (temp != NULL)
		{
			if (count == index)
			{
				cout << temp->Data << "\n";

			}

			count++;
			temp = temp->nextNode;
		}
		return -1;
	}

	void insert(int index, int data)
	{
		Node* newNode = new Node{ data, NULL, NULL };
		Node* temp = head;
		int count = 0;
		while (temp != NULL)
		{
			if (count == index)
			{
				newNode->prevNode = temp->prevNode; // �� �κ��� ���ذ� �� �Ȱ�����, ���ο� ����� ���� ���� ���� Ž������ temp�� ���� ����� 
				newNode->nextNode = temp; // �׸��� ���ο� ����� ���� ���� ���� Ž������ temp ��. �� temp �� ���� ��� - ���ο� ��� - temp �̷����ΰ��� 
				if (temp->prevNode != NULL)
				{
					temp->prevNode->nextNode = newNode;
				}
				else
				{
					head = newNode;
				}
				temp->prevNode = newNode;
				return;
			}
			count++;
			temp = temp->nextNode;
		}
	}

	void remove(int data) // �̰� ���� ��ٷο�
	{
		Node* temp = head;
		while (temp != NULL) 
		{
			// Find the node with the given data
			if (temp->Data == data) 
			{
				// ������ ��尡 ����Ʈ�� �����
				if (temp->prevNode == NULL)  
				{
					head = temp->nextNode; // ��带 ���� ���� ������Ʈ
					if (head != NULL) 
					{
						head->prevNode = NULL; // ������ ��带 null�θ����.
					}
				}
				else 
				{
					temp->prevNode->nextNode = temp->nextNode; // ���� ����
					if (temp->nextNode != NULL) 
					{
						temp->nextNode->prevNode = temp->prevNode;// ���� ���� 
					}
				}
				delete temp;
				return;
			}
			temp = temp->nextNode;
		}
		
	}
};

	int main()
	{
		DoubleLinkedList list;

		list.push_back(7);
		list.push_back(8);
		list.insert(1, 2);
		list.remove(7);
		list.Get(0);

		list.print();
		list.print_backward();


	};