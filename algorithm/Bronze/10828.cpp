#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// �־����� ����� �� 
// Stack Ŭ���� ���� -> ������� �迭 �����
// �����ڿ� size �� �ʱ�ȭ
// push ���� -> �迭�� �� �ڿ� ������ �߰� �ϰ� , �� �ֱ�

class Stack
{
	int arr[10000];
	int size = 0;

public:
	Stack();

	void push(int input)
	{
		arr[size++] = input;
	}

	int pop()
	{
		if (size == 0)
		{
			return -1;
		}
		else
			return arr[--size];
	}

	int size()
	{
		return size;
	}

	int empty()
	{
		if (size == 0)
		{
			return 1;
		}
		else
			return 0;
	}

	int top()
	{

	}
};



int main()
{
	int x;
	cin >> x;

	for (int i = 0; i < x; i++)
	{

	}
}