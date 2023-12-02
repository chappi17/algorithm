#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    unordered_set<int> a;

    for (int b : arr)
    {
        if (a.size() == k)
        {
            break;
        }
        a.insert(b);
    }


    for (int c : arr) {
        if (a.count(c) > 0) {
            answer.push_back(c);
            a.erase(c);
        }
    }

    while (answer.size() < k)
    {
        answer.emplace_back(-1);
    }

    return answer;
}

int main()
{
    solution({3,3},4);
}

//unordered_set ���� count ����� ���� �����
// ������ �ؽð����� �ؼ� ������ ������ �ȸ��� (assign �ߴٰ� ��û �ȵ�)