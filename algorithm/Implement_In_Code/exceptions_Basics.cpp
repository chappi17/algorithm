#include <iostream>

using namespace std;

class MyException : public exception
{
public:
	virtual const char* what() const throw()
	{
		return "Something bad happend";
	}
};

class Test
{
public:
	void GoesWrong()
	{
		throw MyException();
	}
};

int main()
{
	Test test;
	try
	{
		test.GoesWrong();
	}
	catch (MyException& e)
	{
		cout << e.what() << endl;
	}
}


/*
* 
* 
* 
* void mightGoWrong()
{
	bool error1 = false;
	bool error2 = true;
	bool error3 = true;

	if (error1)
	{
		throw "Something went wrong";
	}
	if (error2)
	{
		throw string("Something else went wrong");
	}
	if (error3)
	{
		throw char('a');
	}
}

void useMightGoWrong()
{
	mightGoWrong();
}
* 
int main()
{
	try
	{
		useMightGoWrong();
	}
	catch (int e)
	{
		cout << "Error code: " << e << "\n";
	}
	catch (char const* e)
	{
		cout << "Error Message: " << e << "\n";
	}
	catch (string e)
	{
		cout << "string Error Message: " << e << "\n";
	}
	catch(char e)
	{
		cout << "Something:  " << e << "\n";
	}

	cout << "Still Running" << "\n";
}
*/