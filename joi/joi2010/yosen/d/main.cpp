// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    s[i] = to_string(a);
  }
  set<string> st;
  for (int i = 0; i < 1 << n; i++) {
    if (__builtin_popcount(i) != k) {
      continue;
    }
    vector<string> x;
    for (int j = 0; j < n; j++) {
      if ((i >> j) & 1) {
        x.push_back(s[j]);
      }
    }
    sort(x.begin(), x.end());
    do {
      string now = "";
      for (int j = 0; j < k; j++) {
        now += x[j];
      }
      st.insert(now);
    } while (next_permutation(x.begin(), x.end()));
  }
  cout << st.size() << endl;
  return 0;
}
