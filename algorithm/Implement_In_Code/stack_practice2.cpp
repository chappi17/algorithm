#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

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
bool isBalancedParentheses(const string& parentheses)
{
	stack<char> a;

	for (char b : parentheses)
	{
		if (b == '(' || a.empty())
		{
			a.push(b);
		}
		else if (b == ')' && !a.empty())
		{
			a.pop();
		}
	}
	return a.empty() ? true : false;
}
// 아직 미해결
void sortStack(stack<int>& inputStack)
{


}
int main()
{
	//string b = "hello" ;
	////reverseString(b);
	//string c = ")(";
	//cout << isBalancedParentheses(c) ? true : false;
	stack<int> a;
	a.push(1);
	a.push(7);
	a.push(2);
	a.push(5);

	sortStack(a);



	while (!a.empty())
	{
		cout << a.top() << "\n";
		a.pop();
	}
	return 0;
}