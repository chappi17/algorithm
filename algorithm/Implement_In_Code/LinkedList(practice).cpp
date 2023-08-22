#include<iostream>
using namespace std;

typedef int ElementType;

typedef struct Node
{
	ElementType data;
	struct Node* nextNode;
} Node;

class LinkedListNode
{
public:
	LinkedListNode() : head(NULL) {};
	~LinkedListNode()
	{
		Node* current = head;
		while (current !=NULL)
		{
			Node* nextNode = current->nextNode;
			delete current;
			current = nextNode;
		}
	};


private:
	Node* head;
public:
	Node* CreateNode(ElementType New)
	{
		Node* NewNode = new Node;

		NewNode->data = New;
		NewNode->nextNode = NULL;

		return NewNode;
	}

	void DestroyNode(Node* node)
	{
		delete(node);
	}

	void appendNode(Node** Head, Node* NewNode)
	{
		if ((*Head) == NULL)
		{
			*Head = NewNode;
		}
		else
		{
			Node* Tail = (*Head);
			while (Tail->nextNode != NULL)
			{
				Tail = Tail->nextNode; // ����� ������ NULL�϶����� ���� ��� ã�� ( ������ ��尡 �����̴ϱ�)
			}
			Tail->nextNode = NewNode; // ������ ���� ��忡 ���ο� ��带 �߰��ϴ°��� append
		}
	}
	void print(Node* head) 
	{
		Node* current = head;
		while (current != NULL) {
			cout << current->data << " -> ";
			current = current->nextNode;
		}
		cout << "NULL\n";
	}
};

int main()
{
	LinkedListNode list;

	Node* List = NULL;
	Node* Current = NULL;
	Node* NewNode = NULL;

	for (int i = 0; i < 5; i++)
	{
		NewNode = list.CreateNode(i);
		list.appendNode(&List,NewNode);
	}

	list.print(List);
}