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

class Stack
{
private:
    Node* top;
    int height;

public:
    Stack(int value)
    {
        Node* newNode = new Node(value);
        top = newNode;
        height = 1;
    }

    void printStack()
    {
        Node* temp = top;
        while (temp)
        {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

    void getTop()
    {
        cout << "Top: " << top->value << endl;
    }

    void getHeight()
    {
        cout << "Height: " << height << endl;
    }

    void push(int value)
    {
        Node* newNode = new Node(value);
            newNode->next = top;
            top = newNode;
            height++;
    }

    int pop()
    {
        if (height == 0) return INT_MIN;
        Node* temp = top;
        int popvalue = top->value;
        top = top->next;
        delete temp;
        height--;
        return popvalue;
    }

};

int main()
{

    Stack* myStack = new Stack(4);

    myStack->getTop();
    myStack->getHeight();
    myStack->printStack();
    myStack->push(5);
    myStack->getTop();
    myStack->getHeight();
    myStack->printStack();
    cout << myStack->pop() << endl;
    cout << myStack->pop() << endl;
    return 0;
}