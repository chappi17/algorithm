#include <string>
#include <vector>

using namespace std;

// ���ڿ� ����.
// ���鼭 �����̰ų�, ù�����ΰ� �Ǻ��ϱ� 
// ������ ���ڿ���, ù�����ΰŴ� bool �� �Ǻ�
// �Ǻ��ϰ� �빮�� �ҹ��ڷ� ǥ���Ͽ� ������ ���


string solution(string s) {
    string answer = "";
    bool newword = true;

    for (char a : s)
    {
        if (a == ' ')
        {
             answer.push_back(a);
             newword = true;
        }
        
        else if (newword == true &&isalpha(a))
        {
            answer.push_back(toupper(a));
            newword = false;
        }
 
        else
        {
            answer.push_back(tolower(a));
            newword = false;
        }
    }

    return answer;
}
int main()
{
    solution("for the last week");
}