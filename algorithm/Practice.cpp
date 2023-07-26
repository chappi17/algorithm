#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n - lost.size();  // 우선, 체육복을 잃어버리지 않은 학생들의 수로 시작합니다.

    // 잃어버린 학생과 여분을 가진 학생이 같을 경우를 확인하는 부분입니다.
    // 이 경우에는, 해당 학생은 체육복을 잃어버렸지만, 여분의 체육복이 있으므로 체육 수업에 참여할 수 있습니다.
    for (auto i = lost.begin(); i != lost.end(); ) {
        auto itr = find(reserve.begin(), reserve.end(), *i);
        if (itr != reserve.end()) {
            i = lost.erase(i);  // 잃어버린 학생 목록에서 학생을 제거합니다.
            reserve.erase(itr); // 여분 목록에서 학생을 제거합니다.
            ++answer;           // 체육 수업에 참여할 수 있는 학생의 수를 증가시킵니다.
        }
        else {
            ++i; // 다음 학생을 찾습니다.
        }
    }

    // 여분의 체육복을 가진 학생들이 체육복을 빌려주는 부분입니다.
    for (int i : reserve) {
        auto itr = find(lost.begin(), lost.end(), i - 1); // 바로 앞 번호 학생에게 먼저 체육복을 빌려주려고 합니다.
        if (itr == lost.end()) {
            itr = find(lost.begin(), lost.end(), i + 1); // 앞 번호 학생이 체육복이 필요하지 않으면, 바로 다음 번호 학생에게 빌려줍니다.
        }
        if (itr != lost.end()) {
            lost.erase(itr); // 빌려준 학생을 잃어버린 학생 목록에서 제거합니다.
            ++answer;        // 체육 수업에 참여할 수 있는 학생의 수를 증가시킵니다.
        }
    }
    return answer;  // 최종적으로 체육 수업에 참여할 수 있는 학생의 수를 반환합니다.
}

int main()
{
    solution(5, { 2,4 }, { 1,3,5 });
}
