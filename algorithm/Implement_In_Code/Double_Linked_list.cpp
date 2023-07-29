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

	int Get(int index) // 몇번째 인덱스에 무슨 데이터가 있는지 
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
				newNode->prevNode = temp->prevNode; // 이 부분이 이해가 잘 안갔었음, 새로운 노드의 이전 노드는 현재 탐색중인 temp의 이전 노드임 
				newNode->nextNode = temp; // 그리고 새로운 노드의 다음 노드는 현재 탐색중인 temp 임. 즉 temp 의 이전 노드 - 새로운 노드 - temp 이런식인거임 
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

	void remove(int data) // 이게 제일 까다로움
	{
		Node* temp = head;
		while (temp != NULL) 
		{
			// Find the node with the given data
			if (temp->Data == data) 
			{
				// 삭제할 노드가 리스트의 헤드라면
				if (temp->prevNode == NULL)  
				{
					head = temp->nextNode; // 헤드를 다음 노드로 업데이트
					if (head != NULL) 
					{
						head->prevNode = NULL; // 이전의 노드를 null로만든다.
					}
				}
				else 
				{
					temp->prevNode->nextNode = temp->nextNode; // 연결 해제
					if (temp->nextNode != NULL) 
					{
						temp->nextNode->prevNode = temp->prevNode;// 연결 해제 
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