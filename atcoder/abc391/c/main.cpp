// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<int> pos(n);
  for (int i = 0; i < n; i++) {
    pos[i] = i;
  }
  map<int, int> cnt;
  for (int i = 0; i < n; i++) {
    cnt[i] = 1;
  }
  int ans = 0;
  for (int i = 0; i < q; i++) {
    int type;
    cin >> type;
    if (type == 1) {
      int p, h;
      cin >> p >> h;
      p--;
      h--;
      cnt[pos[p]]--;
      if (cnt[pos[p]] == 1) {
        ans--;
      }
      pos[p] = h;
      cnt[pos[p]]++;
      if (cnt[pos[p]] == 2) {
        ans++;
      }
    }
    if (type == 2) {
      cout << ans << endl;
    }
  }
  return 0;
}
