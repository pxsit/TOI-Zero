/*
 * Author : Piyaphat Jaiboon (github : Piyaph4t)
 * Date : 24/04/2026
 */

#include <bits/stdc++.h>
using namespace std;

/*
 *  Logic :
 *
 *  Algorithm : Depth-First-Search Recursion
 *  Start by selecting one useable element in String
 *  Label that element as used because we won't use it in the next depth
 *
 * */

string s;
int num = 0;
void print_permution(int depth, vector<bool> can_use, string ans) {
  // if reach the maximum depth , print the answer and stop Recursion
  // base case
  if (depth == s.length()) {
    for (auto &c : ans)
      cout << c << " ";
    cout << endl;
    ++num;
    return;
  }
  for (int i = 0; i < s.length(); i++) {
    if (can_use[i]) {
      can_use[i] = false;
      // send infomation to the next Recursion
      print_permution(depth + 1, can_use, ans + s[i]);
      can_use[i] = true;
    }
  }
}

int main(int argc, char *argv[]) {
  int n;

  cin >> n;
  s.resize(n);
  for (int i = 0; i < n; i++)
    cin >> s[i];

  print_permution(0, vector<bool>(s.length(), true), string());

  cout << num << endl;
  return 0;
}
