#include <string>
#include <vector>

// A�� B�� �ٲ� �� �ִ��� Ȯ��
// �ٲٰ� ���� �κ� ���ڿ��� Ư�� ���ڰ� �ִ��� Ȯ��
// return �� ���� 

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