#include <iostream>
#include <string>

using namespace std;


int main()
{
	string a;
	getline(cin, a);
	string c;
	for (char b : a)
	{
		if (isalpha(b))
		{
			char offset = isupper(b) ? 'A' : 'a';
			c += (b - offset + 13) % 26 + offset;
		}
		else
			c += b;
	}

	cout << c << "\n";


}