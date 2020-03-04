#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> a;
	int val;
	int suma = 0;
	while (cin >> val && val != -1) {
		suma += val;
		a.push_back(val);
	}
	cout << suma << endl;

	const int size = 128;
	int b[size];
	int sumb = 0;
	cout << "Input array: " << endl;
	int k = 0;
	while (cin >> val && k < size) {
		sumb += val;
		b[k++] = val;
	}
	cout << sumb << endl;

	return 0;
}
