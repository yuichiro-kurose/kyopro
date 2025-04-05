// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  vector<int> cnt1(26, 0);
  for (char c : s) {
    cnt1[c - 'a']++;
  }
  vector<int> cnt2(101, 0);
  for (int x : cnt1) {
    if (x == 0) {
      continue;
    }
    cnt2[x]++;
  }
  for (int x : cnt2) {
    if (x != 0 && x != 2) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
