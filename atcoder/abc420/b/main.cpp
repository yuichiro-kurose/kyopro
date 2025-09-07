// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  vector<int> score(n, 0);
  for (int j = 0; j < m; j++) {
    int cnt0 = 0, cnt1 = 0;
    for (int i = 0; i < n; i++) {
      if (s[i][j] == '0') {
        cnt0++;
      } else {
        cnt1++;
      }
    }
    if (cnt0 < cnt1) {
      for (int i = 0; i < n; i++) {
        if (s[i][j] == '0') {
          score[i]++;
        }
      }
    }
    if (cnt0 == cnt1) {
      for (int i = 0; i < n; i++) {
        score[i]++;
      }
    }
    if (cnt0 > cnt1) {
      for (int i = 0; i < n; i++) {
        if (s[i][j] == '1') {
          score[i]++;
        }
      }
    }
  }
  int max_val = 0;
  for (int i = 0; i < n; i++) {
    max_val = max(max_val, score[i]);
  }
  vector<int> ans;
  for (int i = 0; i < n; i++) {
    if (score[i] == max_val) {
      ans.push_back(i + 1);
    }
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
