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
            return -1; // 오류 코드
        }
    }

    bool isEmpty() {
        return topNode == nullptr;
    }

    void print()
    {
        Node* tempNode = topNode; // 임시 변수로 topNode의 값을 저장
        while (tempNode != NULL) // NULL이 아닐 때까지 반복
        {
            cout << tempNode->data << "\n"; // 현재 노드의 데이터 출력
            tempNode = tempNode->next; // 다음 노드로 이동
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
        std::cout << "Top: " << myStack.top() << std::endl; // 출력: Top: 40
        myStack.pop();
        std::cout << "Top: " << myStack.top() << std::endl; // 출력: Top: 30

        myStack.print(); // 출력: 30\n20\n10\n
        myStack.pop();
        cout << "\n";
        myStack.print(); // 출력: 30\n20\n10\n

        return 0;
    }