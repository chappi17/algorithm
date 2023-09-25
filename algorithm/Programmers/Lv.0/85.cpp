#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;

    // Sort the emergency array in descending order
    sort(emergency.rbegin(), emergency.rend());

    // Now the emergency vector is your answer.
    answer = emergency;

    return answer;
}

int main()
{
    vector<int> result = solution({ 3, 76, 24 });
    for (int x : result) {
        cout << x << " ";
    }
    return 0;
}