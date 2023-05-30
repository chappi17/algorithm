#include <iostream>
using namespace std;
// 바둑알 십자 뒤집기
// 1. 바둑판 만든다.
// 2. 바둑판을 입력받는다
// 3. n개의 좌표를 받는다 (횟수)
// 4. n개의 좌표를 받는다 (좌표)
// 5.
int main() 
{
    int n, i, j, x, y;
    int a[20][20] = {};

    for (i = 1; i <= 19; i++)
    {
        for (j = 1; j <= 19; j++)
        {
            cin >> a[i][j];
        }
    }

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cin >> x >> y;

        for (j = 1; j <= 19; j++)
        {
            if (a[x][j] == 0)
            {
                a[x][j] = 1;
            }
            else
                a[x][j] = 0;
        }
        for (j = 1; j <= 19; j++)
        {
            if (a[j][y] == 0)
            {
                a[j][y] = 1;
            }
            else
                a[j][y] = 0;
        }
    }

    for (i = 1; i <= 19; i++)
    {
        for (j = 1; j <= 19; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}