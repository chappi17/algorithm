#include <string>
#include <vector>

// Ư�� n�� ���ؼ� ���ӵ� ���ڵ��� ������ n���� ����� ����� �� ī��Ʈ�ϱ�
// 1~ 15���� ���� �������� ���ڵ��� ���� ���ϴٰ� n ���� Ŀ���� �ʱ�ȭ ��Ű�ų�, n�� �������� count ++
// 2~15 �ٽ� ���� 
// �ݺ��ϰ� count �� ���

using namespace std;

int solution(int n) {
    int answer = 0;
    int a = 0;
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            a += j;
            if (a == n)
            {
                count++;
                a = 0;
                break;
            }
            else if (a > n)
            {
                a = 0;
                break;
            }
        }
    }
        return count;
}

int main()
{
    solution(14);
}