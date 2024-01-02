#include <iostream>

using namespace std;

int Factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}

	return n * Factorial(n - 1);
}

int main()
{
	int number = 10;

	int result = Factorial(number);

	cout << "Factorial of " << number << " is: " << result << "\n";




	return 0;
}