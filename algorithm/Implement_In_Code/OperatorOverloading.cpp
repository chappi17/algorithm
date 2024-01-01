#include <iostream>

using namespace std;

class point
{
public:
	point(int a=0, int b=0) { x = a; y = b; }

	void show()
	{
		cout << "x : " << x << "y : " << y << "\n";
	}

	void SetX(int a)
	{
		x = a;
	}

	void SetY(int b)
	{
		y = b;
	}

	point operator+(point p)
	{
		point temp;
		temp.x = x + p.x;
		temp.y = y + p.y;
		return temp;
	}


private:
	int x;
	int y;
};


int main()
{
	point p1(1, 3);
	point p2(5, 2);

	p1 = p2 + p1;
	p1.show();

}