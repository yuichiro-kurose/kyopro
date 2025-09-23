// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long rt, ct, ra, ca;
  cin >> rt >> ct >> ra >> ca;
  long long n, m, l;
  cin >> n >> m >> l;
  vector<char> s(m), t(l);
  vector<int> a(m), b(l);
  for (int i = 0; i < m; i++) {
    cin >> s[i] >> a[i];
  }
  for (int i = 0; i < l; i++) {
    cin >> t[i] >> b[i];
  }
  map<char, pair<int, int>> dir;
  dir['U'] = make_pair(-1, 0);
  dir['D'] = make_pair(1, 0);
  dir['L'] = make_pair(0, -1);
  dir['R'] = make_pair(0, 1);
  int pt = 0, pa = 0;
  long long ans = 0;
  while (pt < m && pa < l) {
    long long w = min(a[pt], b[pa]);
    auto dt = dir[s[pt]], da = dir[t[pa]];
    // long long nrt = rt + dt.first, nct = ct + dt.second, nra = ra + da.first, nca = ca + da.second;
    long long r = ra - rt, dr = dt.first - da.first, c = ca - ct, dc = dt.second - da.second;
    if (dr != 0 && dc != 0) {
      if (r % dr == 0 && c % dc == 0 && r / dr == c / dc && 0 < r / dr && r / dr <= w) {
        ans++;
      }
    }
    if (dr == 0 && dc != 0) {
      if (c % dc == 0 && 0 < c / dc && c / dc <= w && r == 0) {
        ans++;
      }
    }
    if (dr != 0 && dc == 0) {
      if (r % dr == 0 && 0 < r / dr && r / dr <= w && c == 0) {
        ans++;
      }
    }
    if (dr == 0 && dc == 0) {
      if (r == 0 && c == 0) {
        ans += w;
      }
    }
    rt += dt.first * w;
    ct += dt.second * w;
    ra += da.first * w;
    ca += da.second * w;
    if (a[pt] < b[pa]) {
      b[pa] -= w;
      pt++;
    } else if (a[pt] == b[pa]) {
      pt++;
      pa++;
    } else {
      a[pt] -= w;
      pa++;
    }
  }
  cout << ans << endl;
  return 0;
}
