#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c, int d) 
{
	int answer = 0;

    int dice[] = { a, b, c, d };
    sort(dice, dice + 4);

    if (dice[0] == dice[3]) {
        answer = 1111 * dice[0];
    }
    else if ((dice[0] == dice[2] && dice[3] != dice[0]) || (dice[1] == dice[3] && dice[0] != dice[1])) {
        int p = dice[0] == dice[2] ? dice[0] : dice[1];
        int q = dice[0] == dice[2] ? dice[3] : dice[0];
        answer = (10 * p + q) * (10 * p + q);
    }
    else if ((dice[0] == dice[1] && dice[2] == dice[3]) && (dice[0] != dice[2])) {
        int p = dice[0];
        int q = dice[2];
        answer = (p + q) * abs(p - q);
    }
    else if ((dice[0] == dice[1] && dice[2] != dice[3]) ||
        (dice[0] != dice[1] && dice[2] == dice[3])) {
        int p = dice[0] == dice[1] ? dice[0] : dice[2];
        int q = dice[0] != dice[1] ? dice[0] : dice[2];
        int r = dice[0] != dice[1] ? dice[1] : dice[3];
        answer = q * r;
    }
    else 
    {
        answer = dice[0];
    }
    return answer;
}


int main()
{
	solution(1, 2,2,3);
}

// 1, 1, 1, 1
// 4,1,4,4
// 6,3,3,6
// 2,5,2,6

// 너무 조건만 복잡해서 포기