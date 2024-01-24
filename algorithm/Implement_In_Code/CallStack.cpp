#include <iostream>

using namespace std;

void FuncThree()
{
	cout << "Three" << endl;
}

void FuncTwo()
{
	FuncThree();
	cout << "Two" << endl;
}

void FuncOne()
{
	FuncTwo();
	cout << "One" << endl;
}



int main()
{
	FuncOne();
	return 0;
}