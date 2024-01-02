#include <iostream>

using namespace std;

class GameEntity
{
public:
	void Display()
	{
		cout << "Display Game Entity" << endl;
	}

	int Add(int* a, int* b)    //Add two numbers and return the sum
	{
		int sum = *a + *b;
		cout << sum << "\n";
		return sum;
	}
	void AddVal(int* a, int* b, int* result) //Add two numbers and return the sum through the third pointer argument
	{
		*result = *a + *b;
		cout << *result << "\n";
	}
	void Swap(int* a, int* b)  //Swap the value of two integers
	{
		int temp = *a;
		*a = *b;
		*b = temp;
		cout << "Swap!" << "\n";
	}
	void Factorial(int* a, int* result) //Generate the factorial of a number and return that through the second pointer argument
	{
		*result = 1;

		for (int i = 0; i < *a; i++)
		{
			*result *= i;
		}

		cout << *result << "\n";
	}
};


int main()
{
	GameEntity* entity = new GameEntity();

	entity->Display();
	int a = 1;
	int b = 2;
	int result = 5;

	cout <<"a is : " << a <<"b is : " << b << "\n";

	entity->Add(&a, &b);
	entity->AddVal(&a, &b, &result);
	entity->Swap(&a, &b);
	entity->Factorial(&a, &result);

	cout <<"a is : " << a <<"b is : " << b << "\n";

	delete entity;

	return 0;




}