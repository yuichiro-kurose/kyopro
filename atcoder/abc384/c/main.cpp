// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<int> x(5);
  for (int i = 0; i < 5; i++) {
    cin >> x[i];
  }
  string abcde = "ABCDE";
  vector<pair<int, string>> ans;
  for (int i = 1; i < 1 << 5; i++) {
    int p = 0;
    string name = "";
    for (int j = 0; j < 5; j++) {
      if ((i >> j) & 1) {
        p -= x[j];
        name += abcde[j];
      }
    }
    ans.push_back(make_pair(p, name));
  }
  sort(ans.begin(), ans.end());
  for (auto p : ans) {
    cout << p.second << endl;
  }
  return 0;
}
