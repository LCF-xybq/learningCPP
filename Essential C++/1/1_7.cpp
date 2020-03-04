#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ofstream outfile("output", ios_base::app);
	ifstream infile("input");
	if (!outfile || !infile) {
		cerr << "error\n";
	}
	else {
		string word;
		vector<string> strs;
		while (infile >> word) {
			strs.push_back(word);
		}
		sort(strs.begin(), strs.end());
		for (int i = 0; i < strs.size(); i++) {
			outfile << strs[i] << endl;
		}
	}
	return 0;
}
