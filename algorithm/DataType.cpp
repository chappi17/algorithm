#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
	int a;
	long b;
	char c;
	float d;
	double e;

	if (cin >> a >> b >> c >> d >> e)
	{
		// iomanip -> fixed << setprecision(3) 소수점 3자리 까지
		cout << a << endl << b << endl << c << endl << fixed << setprecision(3) << d << endl << fixed << setprecision(9) << e << endl;
	}
	else

	{
		cout << "Error" << endl;
	}

	return 0;
}
