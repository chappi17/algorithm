#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int temp = arr.size();
    int power = 1;

    while(power < temp)
    {
        power *= 2;
    }

    while (arr.size()!= power)
    {
        arr.emplace_back(0);
    }
    answer = arr;
        return answer;
}

int main()
{
    solution({ 58,172,746,89});
}