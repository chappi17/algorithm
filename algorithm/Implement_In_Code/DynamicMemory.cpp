#include <iostream>

using namespace std;

int main()
{
	//int* newIntptr = new int;

	//*newIntptr = 8;

	//cout << "The Value of my new integer is: " << *newIntptr << endl;

	//delete newIntptr;

	int length;

	cout << "Please enter a lengh : ";
	cin >> length;

	int* intPtr = new int[length];

	for (int i = 0; i < length; i++)
	{
		intPtr[i] = i + 1;
	}

	for (int i = 0; i < length; i++)
	{
		cout << "intPtr[" << i << "] : " << intPtr[i] << endl;
	}

	delete[] intPtr;

	intPtr = nullptr;


	return 0;
}