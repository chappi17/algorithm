#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;

    for (int a : array)
    {
        while (a > 0)
        {
            int digit = a % 10;
            if (digit == 7)
            {
                answer++;
            }
            a /= 10;
        }
    }
    return answer;
}

int main()
{
    solution({ 7,77,17 });
}

// ���ڸ��� ���� ���𰡸� ���Ѵٸ� �ϳ��� ������ 10�� �ϰ� (�ڸ���) % -> ������ ���� 10���� ������ ��