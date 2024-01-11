#include <iostream>
#include <exception>

using namespace std;  // std 네임스페이스 사용

void goesWrong()
{
	bool error1Detected = true;
	bool error2Detected = false;

	if (error1Detected)
	{
		throw bad_alloc();
	}

	if (error2Detected)
	{
		throw exception();
	}
}

int main()
{
	try
	{
		goesWrong();
	}
	catch (bad_alloc& e)  // 먼저 bad_alloc 예외 처리
	{
		cout << "Caught bad_alloc: " << e.what() << endl;
	}
	catch (exception& e)  // 그 다음 일반 exception 처리
	{
		cout << "Caught exception: " << e.what() << endl;
	}

	return 0;
}


//#include <iostream>
//#include <exception>
//
//using namespace std;
//
//class MyException : public exception
//{
//public:
//	virtual const char* what() const throw()
//	{
//		return "Something bad happend";
//	}
//};
//
//class Test
//{
//public:
//	void GoesWrong()
//	{
//		throw MyException();
//	}
//};
//
//int main()
//{
//	Test test;
//	try
//	{
//		test.GoesWrong();
//	}
//	catch (MyException& e)
//	{
//		cout << e.what() << endl;
//	}
//}


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