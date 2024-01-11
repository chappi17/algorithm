#include <iostream>

using namespace std;

int main()

{
	int num = 100;

	string result = (num < 10) ? "Positive"
		: (num == 0) ? "Zero"
		: "Negative";

	cout << result;
}