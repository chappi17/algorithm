#include <iostream>
#include <typeinfo>

using namespace std;

class mainess
{
protected:
	int num;
public:
	mainess();
	virtual void show();
	void Setnumber(int n);
};

class sub1 : public mainess
{
private:
	int gas;
public:
	sub1();
	void Setgas(int n);
	void show();
};

mainess::mainess()
{
	num = 0;
	cout << "¸ŞÀÎ »ı¼º" << "\n";
}

void mainess::show()
{
	cout << num << "\n";
	cout << "main ²¨" << "\n";
}

void mainess::Setnumber(int n)
{
	num = n;
}

sub1::sub1()
{
	gas = 0;
}

void sub1::Setgas(int n)
{
	gas = n;
	cout << "num2 ¼¼ÆÃ " << "\n";
}

void sub1::show()
{
	cout << num << "\n";
	cout << "sub1²¨" << "\n";
}

int main()
{
	//sub1 a;
	//a.Setnum(1);
	//a.show();

	mainess* pA[2];
	mainess c;
	sub1 b;

	pA[0] = &c;
	pA[0]->Setnumber(1);

	pA[1] = &b;
	pA[1]->Setnumber(3);

	cout << typeid(c).name() << "\n";
	cout <<typeid(b).name() << "\n";

	for (int i = 0; i < 2; i++)
	{
		pA[i]->show();
	}




	return 0;
}
