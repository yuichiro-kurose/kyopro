// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

vector<vector<bool>> f(int n) {
  vector<vector<bool>> g(n, vector<bool>(n, false));
  int m;
  cin >> m;
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    g[u][v] = true;
    g[v][u] = true;
  }
  return g;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<bool>> g = f(n), h = f(n);
  vector<vector<int>> a(n - 1, vector<int>(n));
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      cin >> a[i][j];
    }
  }
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    p[i] = i;
  }
  int ans = inf;
  do {
    int now = 0;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        if (g[p[i]][p[j]] != h[i][j]) {
          now += a[i][j];
        }
      }
    }
    ans = min(ans, now);
  } while (next_permutation(p.begin(), p.end()));
  cout << ans << endl;
  return 0;
}
