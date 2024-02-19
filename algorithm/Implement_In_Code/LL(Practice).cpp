#include <iostream>
#include <forward_list>

using namespace std;

class Node
{
public:

	int value;
	Node* next;

	Node(int _value)
	{
		value = _value;
		next = nullptr;
	}

};

class LL
{
private:
	Node* head;
	Node* tail;
	int length;
public:
	LL(int _value)
	{
		Node* newNode = new Node(_value);
		head = newNode;
		tail = newNode;
		length = 1;
		cout << "Create Node and assgin value" << "\n";
	};
	~LL()
	{
		Node* temp = head;
		while (head != nullptr)
		{
			head = head->next;
			delete temp;
			temp = head;
		}
	}

	void printList()
	{
		Node* current = head;
		while (current != nullptr)
		{
			cout << current->value << "\n";
			current = current->next;
		}
		cout << "End of List" << "\n";
		cout << "List's length : " << length << "\n";
	}

	void append(int _value)
	{
		Node* newNode = new Node(_value);
		if (head == nullptr)
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
		Node* current = head;
		if (length == 1)
		{
			head = nullptr;
			tail = nullptr;
		}
		else
		{
			Node* pre = head;
			while (current->next != nullptr)
			{
				pre = current;
				current = current->next;
			}
			tail = pre;
			tail->next = nullptr;

		}
		delete current;
		length--;
	}
	void prepend(int _value)
	{
		Node* newNode = new Node(_value);
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
		Node* current = head;
		if (length == 1)
		{
			head = nullptr;
			tail = nullptr;
		}
		else
		{
			head = head->next;
		}
		delete current;
		length--;
	}
	Node* get(int _index)
	{
		if (_index < 0 || _index >= length)
		{
			return nullptr;
		}
		Node* current = head;

		for (int i = 0; i < _index; i++)
		{
			current = current->next;
		}

		return current;
	}
	bool set(int _index, int _value)
	{
		Node* current = get(_index);
		if (current)
		{
			current->value = _value;
			return true;
		}
		return false;
	}
	bool insert(int _index, int _value)
	{
		if (_index < 0 || _index > length) return false;
		if (_index == 0)
		{
			prepend(_value);
			return true;
		}
		if (_index == length)
		{
			append(_value);
			return true;
		}
		else
		{
			Node* newNode = new Node(_value);
			Node* temp = get(_index - 1);

			newNode->next = temp->next;
			temp->next = newNode;
			length++;
		}

	}
	void deleteNode(int _index)
	{
		if (_index < 0 || _index > length)
		{
			return;
		}
		if (_index == 0)
		{
			return deleteFirst();
		}
		if (_index == length)
		{
			return deleteLast();
		}
		Node* temp = get(_index);
		Node* current = get(_index - 1);

		current->next = temp->next;
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
	Node* findMiddleNode()
	{
		Node* slow = head;
		Node* fast = head;

		while (fast != nullptr && fast->next != nullptr)
		{
			slow = slow->next;
			fast = fast->next->next;
		}

		return slow;
	}
	bool hasLoop()
	{
		Node* slow = head;
		Node* fast = head;

		while (fast != nullptr && fast->next != nullptr)
		{
			slow = slow->next;
			fast = fast->next->next;
			if (slow == fast)
			{
				return true;
			}
		}
		return false;

	}
	Node* findKthNodeFromEnd(int _k)
	{
		reverse();
		Node* temp = get(_k);
		reverse();
		return temp;
	}
	void partitionList(int x)
	{
		Node* less = nullptr;
		Node* lessHead = nullptr;
		Node* lessTail = nullptr;
		Node* more = nullptr;
		Node* moreHead = nullptr;
		Node* moreTail = nullptr;
		Node* current = head;


		while (current != nullptr)
		{
			Node* next = current->next;
			current->next = nullptr;

			if (current->value < x)
			{
				if (less == nullptr)
				{
					less = current;
					lessHead = current;
				}
				else
				{
					less->next = current;
					if (less->next != nullptr)
					{
						less = less->next;
						lessTail = current;
					}
				}
			}
			else if (current->value >= x)
			{
				if (more == nullptr)
				{
					more = current;
					moreHead = current;
				}
				else
				{
					more->next = current;
					if (more->next != nullptr)
					{
						more = more->next;
						moreTail = current;
					}
				}
			}
			current = next;
		}
		if (lessTail != nullptr)
		{
			lessTail->next = moreHead;
			head = lessHead;
		}
		if (moreTail != nullptr)
		{
			moreTail->next = nullptr;
		}

	}
	void deleteDuplicate()
	{
		Node* current = head;
		while (current != nullptr)
		{
			Node* runner = current;
			while (runner->next != nullptr)
			{
				if (runner->next->value == current->value)
				{
					Node* temp = runner->next;
					runner->next = runner->next->next;
					delete temp;
					length--;
				}
				else
				{
					runner = runner->next;
				}
			}
			current = current->next;
		}		
	}

	// 아직 미해결
	void reverseBetween(int m, int n)
	{
		Node* temp = nullptr;
		Node* prev = get(m-1);
		Node* fast = get(n + 1);
		
		Node* begin = get(m);
		Node* beginHead = begin;
		
		// 범위 내 노드 앞뒤로 연결 끊기
		for (int i = 0; i < n - 1; i++)
		{
			begin = begin->next;
		}
		Node* beginTail = begin;
		begin->next = nullptr;
		prev->next = nullptr;

		// 범위 내 노드 뒤집기
		temp = beginHead;
		beginHead = beginTail;
		beginTail = temp;
		
		
		

	}
};


int main()
{

	LL List(1);
	List.append(2);
	List.append(3);
	List.append(4);
	List.append(5);
	List.reverseBetween(1, 3);
	
	//	List.deleteDuplicate();
	
	//List.partitionList(5);


//	List.deleteLast();
//	List.deleteLast();
//	List.prepend(1);
//	List.deleteFirst();
//	cout << List.get(1)->value << "\n";
//	List.set(1, 4);
//	List.insert(1, 10);
//	List.reverse();
	//List.deleteNode(1);
//	cout << "Middle Node : " << List.findMiddleNode()->value << "\n";
//	List.hasLoop() ? cout << "true"<<"\n" : cout << "false" << "\n";
//	cout << "KthNodeFromEnd : " << List.findKthNodeFromEnd(3)->value << "\n";
//	List.printList();

	return 0;
}