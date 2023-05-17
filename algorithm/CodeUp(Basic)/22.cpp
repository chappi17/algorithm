#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	string data;
	getline(cin, data);

	for (int i = 0; i < data.size(); i++)
	{
		cout<<"[" << (data[i]-'0') * pow(10,(data.size()-1)-i) << "]" << endl;
	}
}