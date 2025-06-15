// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string n;
  cin >> n;
  vector<int> cnt(10, 0);
  for (char c : n) {
    cnt[c - '0']++;
  }
  if (cnt[1] != 1 || cnt[2] != 2 || cnt[3] != 3) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
  return 0;
}
