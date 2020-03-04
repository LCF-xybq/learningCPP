#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream infile("in");
	int num_tries = 0;
	int num_cor = 0;

	if (!infile) {
		cerr << "cannot open this file!\n";
	}
	else {
		string name;
		int nt;
		int nc;

		while (infile >> name) {
			cout << name << endl;
			infile >> nt >> nc;
			cout << nt << " " << nc << endl;
		}
	}

	return 0;
}
