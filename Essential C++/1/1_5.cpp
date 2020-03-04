#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
/*
	// c++ style
	string name;
	cin >> name;
	switch (name.size()) {
		case 0 : cout << "Error\n";
						 break;
		case 1 : cout << "HeHe\n";
						 break;
		default : cout << name << endl;
	}
*/

	// c style
	const int nm_size = 128;
	char user_name[nm_size];
	cout << "Input your name: ";
	cin >> setw(nm_size) >> user_name;

	switch (strlen(user_name)) {
		case 127 : cout << "toooooooo long\n"; break;
		default : cout << user_name << endl;
	}

	return 0;
}
