#include <iostream>
using namespace std;

// 설탕과자 뽑기

int main() {
    int h, w, n, l, d, x, y;

    // 입력값 받기
    cin >> h >> w;  // 격자판의 세로(h)와 가로(w) 입력
    cin >> n;       // 막대의 개수(n) 입력

    // 2차원 배열을 이용하여 격자판 생성 및 초기화
    int array[100][100] = { 0 };

    // 각 막대의 정보 입력 받고 격자판에 막대 채우기
    for (int i = 0; i < n; i++) {
        cin >> l >> d >> x >> y;  // 막대의 길이(l), 방향(d), 좌표(x, y) 입력

        // 막대를 격자판에 채우기
        for (int k = 0; k < l; k++) 
        {
            if (d == 0) {
                // 가로 방향일 때
                array[x - 1][y - 1 + k] = 1;  // 좌표 (x, y+k) 위치에 1로 표시
            }
            else {
                // 세로 방향일 때
                array[x - 1 + k][y - 1] = 1;  // 좌표 (x+k, y) 위치에 1로 표시
            }
        }
    }

    // 채워진 격자판 출력
    for (int q = 0; q < h; q++) {
        for (int z = 0; z < w; z++) {
            cout << array[q][z] << " ";  // 격자판의 각 요소 출력
        }
        cout << endl;
    }

    return 0;
}