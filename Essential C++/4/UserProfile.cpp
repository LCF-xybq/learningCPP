#include "UserProfile.h"

int main() {
  UserProfile anon;
  cout << anon;

  UserProfile anna("Liu", UserProfile::Guru);
  cout << anna;
  anna.bump_guess_count(27);
  anna.bump_guess_correct(25);
  anna.bump_login_count();
  cout << anna;

  cin >> anon;
  cout << anon;

  return 0;
}
