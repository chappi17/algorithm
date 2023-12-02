#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    int ameri_price = 4500;
    int latte_price = 5000;

    for (const string& a : order)
    {
        if (a.find("americano") != string::npos || a.find("anything") != string::npos)
        {
            answer += ameri_price;
        }
        else if (a.find("latte") != string::npos)
        {
            answer += latte_price;
        }
    }

    return answer;
}

int main()
{
    solution({ "cafelatte", "americanoice", "hotcafelatte", "anything" });
}


// a.find("americano")���� ��� ���� ���ڿ� ���� ���� ���ڰ� �ִ��� Ȯ���� �� �ִ� ����̸�, ������
// ���� ã�� �� ���ٸ� string::npos ���´ٴ� ���ε�, �����ߴ����� ���θ� Ȯ���ϴµ� ���̴� ����̴�. �� �����ߴٸ� true��� �Ű�, ���������� false ��� �� 