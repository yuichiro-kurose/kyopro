// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n, m;
  cin >> n >> m;
  vector<tuple<long long, long long, long long>> tup(m);
  for (int i = 0; i < m; i++) {
    long long a, b;
    cin >> a >> b;
    tup[i] = make_tuple(a - b, a, b);
  }
  sort(tup.begin(), tup.end());
  long long ans = 0;
  for (int i = 0; i < m; i++) {
    long long a = get<1>(tup[i]), b = get<2>(tup[i]);
    if (n < a) {
      continue;
    }
    long long k = (n - b) / (a - b);
    ans += k;
    n = n - k * (a - b);
  }
  cout << ans << endl;
  return 0;
}
