#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer1 = 0;
    int answer2 = 0;

    string A = to_string(a);
    string B = to_string(b);

    answer1 = stoi(A + B);
    answer2 = 2 * a * b;


    return (answer1 > answer2) ? answer1 : answer2;
}

int main()
{
    solution(9, 91);
}