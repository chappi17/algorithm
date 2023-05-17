#include <iostream>
#include <string>
using namespace std;

int main()
{
	string data;
	getline(cin, data);
	for (int i = 0; i < data.size(); i++)
	{
		cout <<"\'" << data[i]<<"\'" << endl;
	}
}