#include <string>
#include <vector>
#include <iostream>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        numbers[i]++;
    }
    return answer;
}