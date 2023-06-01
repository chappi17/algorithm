#include <iostream>
using namespace std;

int main() {
    int maze[10][10];

    // 미로 데이터 입력 받기
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> maze[i][j];
        }
    }

    int x = 1, y = 1; // 개미의 시작 위치
    while (true) {
        if (maze[x][y] == 2) { // 먹이를 찾은 경우
            maze[x][y] = 9;
            break;
        }
        else {
            maze[x][y] = 9; // 개미가 이동한 위치 표시
        }

        if (maze[x][y + 1] != 1) { // 오른쪽으로 이동
            y++;
        }
        else if (maze[x + 1][y] != 1) { // 아래로 이동
            x++;
        }
        else { // 더 이상 움직일 수 없는 경우
            break;
        }
    }

    // 이동 경로 출력
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << maze[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}