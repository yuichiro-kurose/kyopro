// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

long long Pow(long long a, long long b) {
  long long ret = 1;
  while (b > 0) {
    if (b & 1) {
      ret = ret * a % mod;
    }
    a = a * a % mod;
    b >>= 1;
  }
  return ret;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<int> a(n), c(q + 2, 0);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i <= q; i++) {
    cin >> c[i];
    c[i]--;
  }
  vector<int> dist(n, 0);
  for (int i = 1; i < n; i++) {
    dist[i] = (dist[i - 1] + Pow(a[i - 1], a[i])) % mod;
  }
  long long ans = 0;
  for (int i = 0; i < q + 1; i++) {
    int u = c[i], v = c[i + 1];
    if (u > v) {
     swap(u, v);
    }
    ans = (ans + dist[v] - dist[u] + mod) % mod;
  }
  cout << ans << endl;
  return 0;
}
