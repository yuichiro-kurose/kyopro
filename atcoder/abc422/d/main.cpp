// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int Pow(int x, int y) {
  int res = 1;
  for (int i = 0; i < y; i++) {
    res *= x;
  }
  return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  if (k % Pow(2, n) == 0) {
    cout << 0 << endl;
  } else {
    cout << 1 << endl;
  }
  vector<int> ans = {k};
  while (n--) {
    vector<int> new_ans;
    for (int i = 0; i < ans.size(); i++) {
      int x = ans[i] / 2, y = x + (ans[i] % 2);
      new_ans.push_back(x);
      new_ans.push_back(y);
    }
    ans = new_ans;
  }
  for (int i = 0; i < ans.size(); i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << ans[i];
  }
  cout << endl;
  return 0;
}
