#include <iostream>

using namespace std;

struct Node
{
	int Data;
	Node* prevNode;
	Node* nextNode;
};

class Circle_Double_Linked_list
{
private:
	Node* head;
public:
	Circle_Double_Linked_list() : head(NULL) {};

	Node* getNewNode(int data)
	{
		Node* newNode = new Node();
		newNode->Data = data;
		newNode->prevNode = NULL;
		newNode->nextNode = NULL;
		return newNode;
	}

	void addNode(int data)
	{
		Node* newNode = getNewNode(data);

		if (head == NULL)
		{
			head = newNode;
			newNode->nextNode = newNode;
			newNode->prevNode = newNode;
		}
		else
		{
			Node* last = head->prevNode;
			newNode->nextNode = head;
			newNode->prevNode = last;
			last->nextNode = newNode;
			head->prevNode = newNode;
		}
	}

	void print()
	{
		if (head == NULL)
			return;

		Node* temp = head;

		do
		{
			cout << temp->Data << " ";
			temp = temp->nextNode;
		} while (temp != head);
		cout << endl;
	}

	void remove(int data)
	{
		if (head == NULL)
			return;

		Node* temp = head;
		do {
			if (temp->Data == data) {
				// This is the node to delete

				// If the node to delete is the only node in the list
				if (temp->nextNode == temp) {
					head = NULL;
				}
				else {
					// If the node to delete is the head node
					if (temp == head) {
						head = head->nextNode;
					}

					// Adjust the pointers of the previous and next nodes
					temp->prevNode->nextNode = temp->nextNode;
					temp->nextNode->prevNode = temp->prevNode;
				}

				// Delete the node
				delete temp;

				return;
			}
			temp = temp->nextNode;
		} while (temp != head);
	}
};



int main()
{
	Circle_Double_Linked_list list;
	list.addNode(2);
	list.addNode(3);
	list.addNode(4);
	list.remove(4);

	list.print();
};
