#include <iostream>

using namespace std;

class Point
{
public:
	void SetX(int a);
	void SetY(int a);
	int GetX() { return x; }
	int GetY() { return y; }

private:
	int x;
	int y;
};

void Point::SetX(int a)
{
	x = a;
}

void Point::SetY(int a)
{
	y = a;
}


int main()
{
	Point A;
	int a, b;
	cout << "X 좌표를 입력하십시오" << "\n";
	cin >> a;
	A.SetX(a);

	cout << "Y 좌표를 입력하십시오" << "\n";
	cin >> b;
	A.SetY(b);

	cout << "좌표는 (" << A.GetX() << "," << A.GetY() << ")입니다." << "\n";


}