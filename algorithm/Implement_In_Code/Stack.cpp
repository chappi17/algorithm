#include <iostream>
using namespace std;

class Stack
{
    struct Node {
        int data;
        Node* next;
        Node(int value) : data(value), next(nullptr) {}
    };

    Node* topNode;

public:
    Stack() : topNode(nullptr) {}

    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }

    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = topNode;
        topNode = newNode;
    }

    void pop() {
        if (!isEmpty()) {
            Node* tempNode = topNode;
            topNode = topNode->next;
            delete tempNode;
        }
        else {
            std::cerr << "Stack is empty, cannot pop." << std::endl;
        }
    }

    int top() {
        if (!isEmpty()) {
            return topNode->data;
        }
        else {
            std::cerr << "Stack is empty." << std::endl;
            return -1; // ���� �ڵ�
        }
    }

    bool isEmpty() {
        return topNode == nullptr;
    }

    void print()
    {
        Node* tempNode = topNode; // �ӽ� ������ topNode�� ���� ����
        while (tempNode != NULL) // NULL�� �ƴ� ������ �ݺ�
        {
            cout << tempNode->data << "\n"; // ���� ����� ������ ���
            tempNode = tempNode->next; // ���� ���� �̵�
        }
       // cout << "NULL" << "\n";
    }
};

    int main()
    {
        Stack myStack;
        myStack.push(10);
        myStack.push(20);
        myStack.push(30);
        myStack.push(40);
        std::cout << "Top: " << myStack.top() << std::endl; // ���: Top: 40
        myStack.pop();
        std::cout << "Top: " << myStack.top() << std::endl; // ���: Top: 30

        myStack.print(); // ���: 30\n20\n10\n
        myStack.pop();
        cout << "\n";
        myStack.print(); // ���: 30\n20\n10\n

        return 0;
    }