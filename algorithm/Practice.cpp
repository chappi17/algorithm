#include <iostream>
using namespace std;

int main() {
    int maze[10][10];

    // �̷� ������ �Է� �ޱ�
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> maze[i][j];
        }
    }

    int x = 1, y = 1; // ������ ���� ��ġ
    while (true) {
        if (maze[x][y] == 2) { // ���̸� ã�� ���
            maze[x][y] = 9;
            break;
        }
        else {
            maze[x][y] = 9; // ���̰� �̵��� ��ġ ǥ��
        }

        if (maze[x][y + 1] != 1) { // ���������� �̵�
            y++;
        }
        else if (maze[x + 1][y] != 1) { // �Ʒ��� �̵�
            x++;
        }
        else { // �� �̻� ������ �� ���� ���
            break;
        }
    }

    // �̵� ��� ���
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << maze[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}