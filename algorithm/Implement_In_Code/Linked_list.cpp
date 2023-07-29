#include <iostream>

using namespace std;

struct Node
{
	int data; // ��忡 �� ������
	Node* next; // ���� ��忡 ���� ������
};

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
};

int main()
{
	LinkedList list;

	if (list.isEmpty())
		cout << true << "\n";
	list.AddNode(7);
	list.AddNode(8);
	list.push_back(9);
	list.remove();

	list.print();
	
}

