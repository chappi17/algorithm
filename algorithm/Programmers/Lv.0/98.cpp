#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    vector<int> countletter(52, 0);

    for (char a : my_string)
    {
        if (a >= 'a' && a <= 'z')
        {
            int index = a - 'a';
            countletter[index + 26]++;
        }
        else if (a >= 'A' && a <= 'Z')
        {
            int index = a - 'A';
            countletter[index]++;
        }
    }

    return answer;
}

int main()
{
    solution("Programmers");
}

/*
A ~Z 까지는 0~ 25 까지

​

a ~z 까지는  26~51 총 52개이다.

​

각자의 인덱스를 구하려면 소문자의 경우

​

전체 52개의 알파벳 중에서

​

index + 26을 하면  소문자의 인덱스를 매치시킬수 있고

​

대문자는

index만 표시해도 정렬할 수 있다.
*/