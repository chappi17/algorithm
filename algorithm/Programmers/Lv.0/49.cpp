#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;

    if (direction == "right")
    {
        int Last = numbers[numbers.size() - 1];
        answer.emplace_back(Last);
        for (int i = 0; i < numbers.size() - 1; i++)
        {
            answer.emplace_back(numbers[i]);
        }
    }
    else
    {
        int First = numbers[0];
        for (int i = 1; i < numbers.size(); i++)
        {
            answer.emplace_back(numbers[i]);
        }
        answer.emplace_back(First);
    }
    return answer;
}
int main()
{
    solution({ 4,455,6,4,-1,45,6 }, "left");
}