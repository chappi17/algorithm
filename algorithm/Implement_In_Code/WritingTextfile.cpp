#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream outfile;
	// fstream outfile;


	string outputFileName = "text.txt";
	outfile.open(outputFileName);
	// outfile.open(outputFileName, ios::out);

	if (outfile.is_open())
	{
		outfile << "This is a line." << endl;
		outfile << "This is another line." << endl;
		outfile << "Here's the third line." << endl;
		outfile.close();
	}
	else
	{
		cout << "Could not create file: " << outputFileName << "\n";
	}

	return 0;
}