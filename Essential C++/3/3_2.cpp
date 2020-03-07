#include <map>
#include <set>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

typedef vector<string> vstring;
void populate_map(ifstream &, map<string, vstring> &);
void display_map(const map<string, vstring> &, ostream &);

int main() {
  map<string, vstring> familes;
  ifstream nameFile("3_2.txt");

  if (!nameFile) {
    cerr << "error\n";
    return -1;
  }

  populate_map(nameFile, familes);
  display_map(familes, cout);
  return 0;
}

void populate_map(ifstream &nameFile, map<string, vstring> &families) {
  string textline;
  while (getline(nameFile, textline)) {
    string fam_name;
    vector<string> child;
    string::size_type pos = 0, prev_pos = 0, text_size = textline.size();

    while ((pos = textline.find_first_of(' ', pos)) != string::npos) {
      string::size_type end_pos = pos - prev_pos;
      if (!prev_pos) {
        fam_name = textline.substr(prev_pos, end_pos);
      } else {
        child.push_back(textline.substr(prev_pos, end_pos));
      }
      prev_pos = ++pos;
    }

    if (prev_pos < text_size) {
      void populate_map(ifstream &, map<string, vstring> &);
    }

    if (!families.count(fam_name)) {
      families[fam_name] = child;
    } else {
      cerr << "existed\n";
    }
  }
}

void display_map(const map<string, vstring> &families, ostream &os) {
  map<string, vstring>::const_iterator it = families.begin(), end_it = families.end();
  while (it != end_it) {
    os << it->first;
    if (!it->second.empty()) {
      vector<string>::const_iterator iter = it->second.begin(), end_iter = it->second.end();
      while (iter != end_iter) {
        os << " " << *iter << " ";
        ++iter;
      }
      cout << endl;
    }
    ++it;
  }
}
