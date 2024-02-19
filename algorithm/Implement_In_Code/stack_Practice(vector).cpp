#include <iostream>
#include <vector>

using namespace std;

class stack
{
private:
	vector<int> stackVector;
public:
	vector<int>& getstackvector() { return stackVector; }
	
	void printStack()
	{
		for (int i = 0; i < stackVector.size(); i++)
		{
			cout << stackVector[i] << "\n";
		}
	}

	bool isEmpty()
	{
		return stackVector.size() == 0;
	}

	int peek()
	{
		if (isEmpty())
		{
			return 0;
		}
		else
		{
			return stackVector[stackVector.size() - 1];
		}
	}

	void push(int _value)
	{
		stackVector.push_back(_value);
	}

	void pop()
	{
		if (isEmpty())
		{
			return;
		}
		stackVector.pop_back();
	}

};

int main()
{
	stack a;
	a.push(1);
	a.push(2);
	a.push(3);

	a.printStack();
}