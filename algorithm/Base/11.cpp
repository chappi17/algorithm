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
	cout << "X ��ǥ�� �Է��Ͻʽÿ�" << "\n";
	cin >> a;
	A.SetX(a);

	cout << "Y ��ǥ�� �Է��Ͻʽÿ�" << "\n";
	cin >> b;
	A.SetY(b);

	cout << "��ǥ�� (" << A.GetX() << "," << A.GetY() << ")�Դϴ�." << "\n";


}