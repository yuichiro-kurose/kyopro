// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  unordered_set<long long> st;
  auto f = [&](auto f, vector<vector<int>> g, int u) -> void {
    if (u == n) {
      long long xor_sum = 0;
      for (int i = 0; i < g.size(); i++) {
        long long sum = 0;
        for (int x : g[i]) {
          sum += a[x];
        }
        xor_sum ^= sum;
      }
      st.insert(xor_sum);
      return;
    }
    for (int v = 0; v < g.size(); v++) {
      g[v].push_back(u);
      f(f, g, u + 1);
      g[v].pop_back();
    }
    g.push_back(vector<int>(1, u));
    f(f, g, u + 1);
  };
  f(f, vector<vector<int>>(0), 0);
  cout << st.size() << endl;
  return 0;
}
