// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> p;
  for (int i = 0; i < n; i++) {
    char c;
    cin >> c;
    if (c == '1') {
      p.push_back(i);
    }
  }
  if (p.size() == 1) {
    cout << 0 << endl;
    return 0;
  }
  long long ans = 0;
  int o = p[p.size() / 2];
  for (int i = 0; i < p.size(); i++) {
    if (i == p.size() / 2) {
      continue;
    }
    ans += abs(p[i] - o) - abs((int) (i - p.size() / 2));
  }
  cout << ans << endl;
  return 0;
}
