#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n - lost.size();  // �켱, ü������ �Ҿ������ ���� �л����� ���� �����մϴ�.

    // �Ҿ���� �л��� ������ ���� �л��� ���� ��츦 Ȯ���ϴ� �κ��Դϴ�.
    // �� ��쿡��, �ش� �л��� ü������ �Ҿ��������, ������ ü������ �����Ƿ� ü�� ������ ������ �� �ֽ��ϴ�.
    for (auto i = lost.begin(); i != lost.end(); ) {
        auto itr = find(reserve.begin(), reserve.end(), *i);
        if (itr != reserve.end()) {
            i = lost.erase(i);  // �Ҿ���� �л� ��Ͽ��� �л��� �����մϴ�.
            reserve.erase(itr); // ���� ��Ͽ��� �л��� �����մϴ�.
            ++answer;           // ü�� ������ ������ �� �ִ� �л��� ���� ������ŵ�ϴ�.
        }
        else {
            ++i; // ���� �л��� ã���ϴ�.
        }
    }

    // ������ ü������ ���� �л����� ü������ �����ִ� �κ��Դϴ�.
    for (int i : reserve) {
        auto itr = find(lost.begin(), lost.end(), i - 1); // �ٷ� �� ��ȣ �л����� ���� ü������ �����ַ��� �մϴ�.
        if (itr == lost.end()) {
            itr = find(lost.begin(), lost.end(), i + 1); // �� ��ȣ �л��� ü������ �ʿ����� ������, �ٷ� ���� ��ȣ �л����� �����ݴϴ�.
        }
        if (itr != lost.end()) {
            lost.erase(itr); // ������ �л��� �Ҿ���� �л� ��Ͽ��� �����մϴ�.
            ++answer;        // ü�� ������ ������ �� �ִ� �л��� ���� ������ŵ�ϴ�.
        }
    }
    return answer;  // ���������� ü�� ������ ������ �� �ִ� �л��� ���� ��ȯ�մϴ�.
}

int main()
{
    solution(5, { 2,4 }, { 1,3,5 });
}
