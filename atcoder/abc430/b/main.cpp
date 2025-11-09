// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<vector<char>> s(n, vector<char>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> s[i][j];
    }
  }
  set<string> st;
  for (int i = 0; i + m - 1 < n; i++) {
    for (int j = 0; j + m - 1 < n; j++) {
      string now = "";
      for (int a = 0; a < m; a++) {
        for (int b = 0; b < m; b++) {
          now += s[i + a][j + b];
        }
      }
      st.insert(now);
    }
  }
  cout << st.size() << endl;
  return 0;
}
