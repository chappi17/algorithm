#include <iostream>

using namespace std;

typedef int ElementType;

typedef struct tagNode
{
	int data; // ��忡 �� ������
	struct tagNode* next; // ���� ��忡 ���� ������
} Node;

class LinkedList
{
private:
	Node* head;
public:
	LinkedList() : head(nullptr) {};
	~LinkedList()
	{
		while (head) {
			Node* next = head->next;
			delete head;
			head = next;
		}
	}

	Node* CreateNode(ElementType NewData)
	{
		Node* NewNode = (Node*)malloc(sizeof(Node));

		NewNode->data = NewData;
		NewNode->next = NULL;
		return NewNode;
	}

	bool isEmpty() const
	{
		return head == nullptr;
	}

	void AddNode(int data)
	{
		Node* newNode = new Node;
		newNode->data = data;
		newNode->next = head;
		head = newNode;
	}

	void InsertNode(Node* Current, Node* NewNode)
	{
		NewNode->next = Current->next;
		Current->next = NewNode;
	}

	void push_back(int data)
	{
		if (isEmpty())
		{// �ƹ��͵� ������ ���ο� ��� �߰� 
			AddNode(data);
			return;
		}
		Node* newNode = new Node;
		newNode->data = data;
		newNode->next = nullptr;

		Node* last = head;
 		while (last->next !=nullptr)
		{
			last = last->next; // last�� next �� nullptr �� �ɶ����� ��ȸ ->last�� ������ ��带 ����ų ������ 
		}
		last->next = newNode; // ������ ��带 �� ���� �����. 
	}

	Node* GetHead()
	{
		return head;
	}

	void print() const
	{
		Node* temp = head;
		while (temp != nullptr)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}

	void remove()
	{
		if (isEmpty())
			return;

		if (head->data)
		{
			Node* toDelete = head;
			head = head->next;
			delete toDelete;
			return;
		}
	}

	Node* findNode(Node* Head, int Location)
	{
		Node* Current = Head;
		while (Current !=NULL && (--Location) >=0)
		{
			Current = Current->next;
		}

		if (Current)
		{
			cout << Current->data;
		}

		return Current;
	}
};

int main()
{
	LinkedList list;
	
	Node* List = NULL;
	Node* Current = NULL;
	Node* NewNode = NULL;

	//if (list.isEmpty())
	//	cout << true << "\n";



	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	list.push_back(5);
	list.AddNode(3);

	list.print();
	list.findNode(list.GetHead(), 1);


	
	//list.AddNode(7);
	//list.AddNode(8);
	//list.remove();

	
}

