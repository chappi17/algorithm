#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;

    sort(numbers.begin(), numbers.end());

    answer =max(numbers[0] * numbers[1], numbers[numbers.size() - 1] * numbers[numbers.size() - 2]);
    

    return answer;
}

int main()
{
    solution({ 1,2,-3,4,-5 });
}