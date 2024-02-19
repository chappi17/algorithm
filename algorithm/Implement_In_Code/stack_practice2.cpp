#include <iostream>
#include <stack>

using namespace std;

string reverseString(const string& str)
{
	stack<char> a;
	string result;

	for (int i = 0; i < str.size(); i++)
	{
		a.push(str[i]);
	}

	while (!a.empty())
	{
		result += a.top();
		a.pop();
	}
	return result;
}

int main()
{
	string b = "hello" ;
	reverseString(b);
	return 0;
}