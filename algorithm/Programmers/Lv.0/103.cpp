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

//unordered_set 에서 count 기능을 몰라서 고생함
// 순서를 해시값으로 해서 순서가 무조건 안맞음 (assign 했다가 엄청 안됨)