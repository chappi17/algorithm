#include <iostream>

using namespace std;

class Node
{
public:
    int value;
    Node* next;

    Node(int value)
    {
        this->value = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;
    Node* tail;
    int length;
public:

    LinkedList(int value)
    {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;
    }
    ~LinkedList() {
        Node* temp = head;
        while (head) {
            head = head->next;
            delete temp;
            temp = head;
        }
    }

    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

    void append(int value)
    {
        Node* newNode = new Node(value);
        if (length == 0)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        length++;
    }

    void deleteLast()
    {
        if (length == 0) return;
        Node* temp = head;
        if (length == 1)
        {
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            Node* pre = head;
            while (temp->next)
            {
                pre = temp;
                temp = temp->next;
            }
            tail = pre;
            tail->next = nullptr;
        }
        delete temp;
        length--;
    }

    void prepend(int value)
    {
        Node* newNode = new Node(value);
        if (length == 0)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
        length++;
    }

    void deleteFirst()
    {
        if (length == 0) return;
        Node* temp = head;
        if (length == 1)
        {
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            head = head->next;
        }
        delete temp;
        length--;
    }

    Node* get(int index)
    {
        if (index < 0 || index >= length)
        {
            return nullptr;
        }
        Node* temp = head;
        for (int i = 0; i < index; i++)
        {
            temp = temp->next;
        }
        return temp;
    }

    bool set(int index, int value)
    {
        Node* temp = get(index);
        if (temp)
        {
            temp->value = value;
            return true;
        }
        return false;
    }

    bool insert(int index, int value)
    {
        if (index < 0 || index > length) return false;
        if (index == 0)
        {
            prepend(value);
            return true;
        }
        if (index == length)
        {
            append(value);
            return true;
        }
        Node* newNode = new Node(value);
        Node* temp = get(index - 1);
        newNode->next = temp->next;
        temp->next = newNode;
        length++;
        return true;
    }

    void deleteNode(int index)
    {
        if (index < 0 || index >= length) return;
        if (index == 0) return deleteFirst();
        if (index == length - 1) return deleteLast();

        Node* prev = get(index - 1);
        Node* temp = prev->next;

        prev->next = temp->next;
        delete temp;
        length--;
    }

    void reverse()
    {
        Node* temp = head;
        head = tail;
        tail = temp;
        Node* after = temp->next;
        Node* before = nullptr;

        for (int i = 0; i < length; i++)
        {
            after = temp->next;
            temp->next = before;
            before = temp;
            temp = after;
        }
    }

    void getHead() {
        if (head == nullptr) {
            cout << "Head: nullptr" << endl;
        }
        else {
            cout << "Head: " << head->value << endl;
        }
    }

    void getTail() {
        if (tail == nullptr) {
            cout << "Tail: nullptr" << endl;
        }
        else {
            cout << "Tail: " << tail->value << endl;
        }
    }

    void getLength() {
        cout << "Length: " << length << endl;
    }

};



int main() {

    LinkedList* myLinkedList = new LinkedList(4);

    myLinkedList->getHead();
    myLinkedList->getTail();
    myLinkedList->getLength();

    cout << "\nLinked List:\n";
    myLinkedList->printList();

    /*
        EXPECTED OUTPUT:
        ----------------
        Head: 4
        Tail: 4
        Length: 1

        Linked List:
        4

    */

}


//#include <iostream>
//
//class Node
//{
//public:
//	int value;
//	Node* next;
//
//	Node(int value)
//	{
//		this->value = value;
//		next = nullptr;
//	}
//};
//
//class linkedList
//{
//private:
//	Node* head;
//	Node* tail;
//	int length;
//public:
//
//	linkedList(int value)
//	{
//		Node* newNode = new Node(value);
//		head = newNode;
//		tail = newNode;
//		length = 1;
//	}
//
//	void append(int value);
//
//	void prepend(int value);
//
//	bool insert(int index, int value);
//};
//
//int main()
//{
//	linkedList* Firstlinkedlist = new linkedList(4);
//}