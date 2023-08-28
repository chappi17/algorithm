#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

// 입실 관리
// 이름을 모두 소문자로 변환한느 프로그램


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