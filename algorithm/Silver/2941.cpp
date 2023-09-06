#include <iostream>

using namespace std;

int main()
{
    string a; // 입력을 받을 문자열 변수를 선언합니다.
    cin >> a; // 사용자로부터 문자열을 입력받습니다.
    int count = 0; // 크로아티아 알파벳의 개수를 세기 위한 변수를 선언합니다.

    // 문자열의 각 문자를 확인합니다.
    for (int i = 0; i < a.length(); i++) {
        // 먼저 3글자 크로아티아 알파벳(dz=)을 확인합니다.
        if (i < a.length() - 2) { // 뒤에 2글자 이상 남아있는 경우에만 확인합니다.
            string dz = a.substr(i, 3); // 현재 위치에서 3글자를 잘라냅니다.
            if (dz == "dz=") { // dz=인지 확인합니다.
                count++; // 카운트를 1 증가시킵니다.
                i += 2;  // 다음 두 문자는 건너뜁니다.
                continue; // 루프의 다음 반복으로 넘어갑니다.
            }
        }

        // 2글자 크로아티아 알파벳을 확인합니다.
        if (i < a.length() - 1) { // 뒤에 1글자 이상 남아있는 경우에만 확인합니다.
            string alpha = a.substr(i, 2); // 현재 위치에서 2글자를 잘라냅니다.
            // 알파벳 리스트 중 하나인지 확인합니다.
            if (alpha == "c=" || alpha == "c-" || alpha == "d-" || alpha == "lj" || alpha == "nj" || alpha == "s=" || alpha == "z=") {
                count++; // 카운트를 1 증가시킵니다.
                i++;  // 다음 문자는 건너뜁니다.
                continue; // 루프의 다음 반복으로 넘어갑니다.
            }
        }

        // 단일 문자 알파벳의 경우 카운트를 1 증가시킵니다.
        count++;
    }

    cout << count << endl; // 결과를 출력합니다.

    return 0;
}