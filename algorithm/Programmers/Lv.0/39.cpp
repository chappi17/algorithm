#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";

    for (int i = 0; i < cipher.size(); i++) 
    {
        if ((i + 1) % code == 0) 
        {  // �ε����� 1���� ���� ����
            answer += cipher[i];
        }
    }
    return answer;
}

int main()
{
    solution("dfjardstddetckdaccccdegk", 4);
}