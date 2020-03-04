#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream outfile("out", ios_base::app);

	if (!outfile) {
		cerr << "Oops\n";
	} else {
		outfile << "aaa" << ' '
						<< "bbb" << ' '
						<< "ccc" << endl;
	}

	return 0;
}
