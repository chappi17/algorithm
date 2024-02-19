#include <iostream>

using namespace std;

class Node
{
public:
	int value;
	Node* next;
	Node* prev;

	Node(int _value)
	{
		value = _value;
		next = nullptr;
		prev = nullptr;
	}
};

class DLL
{
private:
	Node* head;
	Node* tail;
	int length;
public:

	DLL(int _value)
	{
		Node* newNode = new Node(_value);
		head = newNode;
		tail = newNode;
		length = 1;
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

		if (length ==0)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			newNode->prev = tail;
			tail = newNode;
		}
		length++;
	}
	void deleteLast()
	{
		if (length == 0) return;
		Node* temp = tail;
		if (length == 1)
		{
			head = nullptr;
			tail = nullptr;
		}
		else
		{
		tail = tail->prev;
		tail->next = nullptr;
		}
		delete temp;
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
		head->prev = newNode;
		head = head->prev;

		}
		length++;

	}
	void deleteFirst()
	{
		if (length == 0) return;

		if (length == 1)
		{
			head = nullptr;
			tail = nullptr;
		}
		else
		{
			Node* temp = head;
			head = head->next;
			delete temp;
			head->prev = nullptr;
		}
		length--;
	}
	Node* get(int _index)
	{
		if (_index < 0 || _index >= length)
		{
			return nullptr;
		}
		Node* temp;

		if (_index < length / 2)
		{
			temp = head;
			for (int i = 0; i < _index; i++)
			{
				temp = temp->next;
			}
		}
		else
		{
			temp = tail;
			for (int i = length-1; i > _index; i--)
			{
				temp = temp->prev;
			}
		}
		return temp;
	}
	bool set(int _index, int _value)
	{
		Node* temp = get(_index);
		if (temp)
		{
			temp->value = _value;
			return true;
		}
		return false;
	}
	bool insert(int _index, int _value)
	{
		Node* newNode = new Node(_value);
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
			Node* before = get(_index - 1);
			Node* after = before->next;

			newNode->prev = before;
			newNode->next = after;
			before->next = newNode;
			after->prev = newNode;
			length++;
			return true;
		}
		
	}
	void deleteNode(int _index)
	{
		if (_index < 0 || _index >= length) return;
		if (_index == 0)
		{
			return deleteFirst();
		}
		if (_index == length-1)
		{
			return deleteLast();
		}
		else
		{

			Node* temp = get(_index);
			//Node* before = temp->prev;
			//Node* after = temp->next;

			//before->next = after;
			//after->prev = before;
			//delete temp;

			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			delete temp;
			length--;			
		}
	}
	void swapFirstLast()
	{
		if (length < 2) return;
		
		int temp = head->value;
		head->value = tail->value;
		tail->value = temp;
	}
	void reverse()
	{
		if (length < 2) return;

		Node* temp = nullptr;
		Node* current = head;

		temp = head;
		head = tail;
		tail = temp;

		while (current != nullptr)
		{
			temp = current->prev;
			current->prev = current->next;
			current->next = temp;
			current = current->prev;
		}
	}
	bool isPalindrom()
	{
		if (length == 0) return false;
		if (length == 2)
		{
			return head->value == tail->value;		
		}

		Node* temp = get(length / 2);
		Node* back = temp->prev;
		Node* foward = temp->next;
		while (back !=nullptr && foward != nullptr)
		{
			if (back->value != foward->value)
			{
				return false;
			}
			back = back->prev;
			foward = foward->next;
		}
		return true;
	}
	// 아직 미해결
	void swapPairs()
	{
		// length 의 홀수 짝수에 따라 로직이 다름
		// 시작을 기점으로 바꾸는게 중요 포인트 + 리스트가 하나인지 비었는지 체크도 잊지 말것
		if (length <2) return;
		if (length == 2)
		{
			Node* temp = nullptr;
			temp = head;
			head = tail;
			tail = temp;
		}
		
		if (length > 2&& length % 2 == 0) // 짝수 일때
		{
			Node* current = head->next;
			Node* temp = nullptr;
			while (current != nullptr)
			{
				
			}
			



		}
		else // 홀수 일때
		{

		}
	}

};

int main()
{
	DLL* myDll = new DLL(1);
	myDll->append(2);
	myDll->append(3);
	myDll->append(4);
	myDll->append(5);
	myDll->append(6);
	myDll->isPalindrom();
	
	//myDll->reverse();
	//myDll->swapFirstLast();
	//myDll->deleteLast();
	//cout << "We will get : " <<myDll->get(0)->value << " Node";

	myDll->printList();
}