#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

// �Խ� ����
// �̸��� ��� �ҹ��ڷ� ��ȯ�Ѵ� ���α׷�


int main()
{
	int c;
	cin >> c;
	string a;
	string answer;

    for (int i = 0; i < c; i++)
    {
        cin >> a;
        answer.reserve(a.size()); 
        for (auto b : a)
        {
            answer += tolower(b);         
        }

        cout << answer << "\n";
        answer.clear();     
    }
}