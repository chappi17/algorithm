#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;


int main()
{
	stack<string> a;

	a.push("Move piece to A3");
	a.push("Get B4");
	a.push("Move piece to C5");

	if (!a.empty())
	{
		cout << "Undo action " << a.top() << "\n";
		a.pop();
	}

	cout << a.top() << "\n";


	queue<string> b;

	b.push("Player joined");
	b.push("Enemy spotted");
	b.push("Attack Enemy");

	while (!b.empty())
	{
		cout << "Processing event: " << b.front() << "\n";

		b.pop();
	}


	return 0;
}