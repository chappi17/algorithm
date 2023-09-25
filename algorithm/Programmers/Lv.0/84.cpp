#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    vector<int> temp;
    for (int a : array)
    {
        temp.emplace_back(abs(n - a));
    }
    int a1 = *min_element(temp.begin(), temp.end());

    for (int i = 0; i < temp.size(); i++)
    {
        if (abs(n-array[i]) == a1 )
        {
            if (answer != 0)
            {
                answer = min(answer, array[i]);
            }
            else
            {
                answer = array[i];
            }
        }
    }

    return answer;
}

int main()
{
    solution({ 13,11 }, 12);
}