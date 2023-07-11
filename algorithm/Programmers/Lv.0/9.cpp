#include <string>
#include <vector>

// A를 B로 바꿀 수 있는지 확인
// 바꾸고 나서 부분 문자열로 특정 문자가 있는지 확인
// return 값 조절 

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string a;

    for (int i = 0; i < myString.size(); i++)
    {
        if (myString[i] == 'A')
        {
            a += "B";
        }
        else
            a += "A";
    }

    if (a.find(pat) != string::npos)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    solution("ABBAA","AABB");
    return 0;
}