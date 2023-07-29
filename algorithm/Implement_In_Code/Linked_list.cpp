#include <iostream>

using namespace std;

struct Node
{
	int data; // 노드에 들어갈 데이터
	Node* next; // 다음 노드에 대한 포인터
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
		{// 아무것도 없으면 새로운 노드 추가 
			AddNode(data);
			return;
		}
		Node* newNode = new Node;
		newNode->data = data;
		newNode->next = nullptr;

		Node* last = head;
 		while (last->next !=nullptr)
		{
			last = last->next; // last의 next 가 nullptr 이 될때까지 순회 ->last가 마지막 노드를 가리킬 때까지 
		}
		last->next = newNode; // 마지막 노드를 새 노드로 만든다. 
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

