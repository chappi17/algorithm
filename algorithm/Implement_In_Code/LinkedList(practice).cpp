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
				Tail = Tail->nextNode; // 노드의 테일이 NULL일때까지 다음 노드 찾기 ( 마지막 노드가 테일이니까)
			}
			Tail->nextNode = NewNode; // 마지막 테일 노드에 새로운 노드를 추가하는것이 append
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