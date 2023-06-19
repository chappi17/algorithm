#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// 주어지는 명령의 수 
// Stack 클래스 생성 -> 사이즈와 배열 만들기
// 생성자와 size 값 초기화
// push 구현 -> 배열의 값 뒤에 사이즈 추가 하고 , 값 넣기

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