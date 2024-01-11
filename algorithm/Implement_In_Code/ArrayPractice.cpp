#include <iostream>
#include <vector>

using namespace std;

string Reverse(string& a)
{
	string b;
	for (int i = a.size()-1; i >= 0; i--)
	{
		b += a[i];
	}
	a = b;
	return b;
}

void Copy(int arr[], int arr2[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr2[i] = arr[i];
	}
}


int main()
{
	string word = "Hello";
	Reverse(word);
	cout << word << endl;

	const int arrsize = 5;
	int a[5] = { 1,2,3 };
	int b[arrsize];

	Copy(a, b, 3);
	int n = 2;

	//vector<int>c= { 10,20,30,40,50 };
	//c.insert(c.begin() + n, 25);

	//for (int i = 0; i < c.size(); i++)
	//{
	//	cout << c[i] << endl;
	//}

	vector<int> d = { -10,20,30,40,50 };

	d.erase(d.begin() + n-1);

	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << endl;
	}


	



	return 0;
}


//#include <iostream>
//
//using namespace std;
//
//
//int Dot(int a[], int b[], int length)
//{
//	int sum = 0;
//	for (int i = 0; i < length ; i++)
//	{
//		sum += a[i] * b[i];
//	}
//	return sum;
//}
//
//char GetCharactor(const char* prompt, const char* error)
//{
//	char input;
//	bool failure;
//
//	do
//	{
//		failure = false;
//		cout << prompt;
//		cin >> input;
//
//		if (cin.fail())
//		{
//			cin.clear();
//			cout << error << endl;
//			failure = true;
//		}
//		else
//		{
//			if (isalpha(input))
//			{
//				input = tolower(input);
//			}
//			else
//			{
//				cout << error << endl;
//				failure = true;
//			}
//		}
//	} while (failure);
//
//	return input;
//}
//
//int main()
//{
//#pragma 
//	// Problem 1: Write a function that takes 2 vectors and returns the dot product of the two vectors. The two vectors must be the same size
//	int vector1[3] = { 1,4,7, };
//	int vector2[3] = { 2,5,8, };
//
//	int answer = 0;
//	answer =Dot(vector1, vector2, 3);
//
//
//	//Problem 2: Make a function called GetCharacter that will take in a cstring prompt, an error cstring,
//	//and return a character from stdin from the user. If the user types something incorrectly or the input doesn't match the valid inputs,
//	//the function should recover from the failure gracefully and output the error cstring and prompt the user to try again.
//
//	char a =GetCharactor("Please enter a charactor: ", "Input Error! Try char");
//	cout << "You enter: " << a << endl;
//
//
//	return 0;
//}