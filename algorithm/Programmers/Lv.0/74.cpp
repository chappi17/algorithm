#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string letter) {
	string answer = "";

	map<string, char> list = {
{".-",'a'},{"-...",'b'},{"-.-.",'c'},{"-..",'d'},{".",'e'},{"..-.",'f'},
{"--.",'g'},{"....",'h'},{"..",'i'},{".---",'j'},{"-.-",'k'},{".-..",'l'},
{"--",'m'},{"-.",'n'},{"---",'o'},{".--.",'p'},{"--.-",'q'},{".-.",'r'},
{"...",'s'},{"-",'t'},{"..-",'u'},{"...-",'v'},{".--",'w'},{"-..-",'x'},
{"-.--",'y'},{"--..",'z'}
	};

	string temp;
	stringstream ss(letter);


	while (getline(ss, temp, ' '))
	{
		if (list.find(temp) != list.end())
		{
			answer += list[temp];
		}
	}

	return answer;
}

int main()
{
	solution(".--. -.-- - .... --- -.");
}