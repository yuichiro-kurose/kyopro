// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n, m, c;
  cin >> n >> m >> c;
  vector<long long> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  vector<long long> pos, cnt;
  int idx = 0;
  while (idx < n) {
    int count = 1;
    while (idx + 1 < n && a[idx + 1] == a[idx]) {
      idx++;
      count++;
    }
    cnt.push_back(count);
    pos.push_back(a[idx]);
    idx++;
  }
  int sz = cnt.size();
  for (int i = 0; i < sz * 2; i++) {
    cnt.push_back(cnt[i]);
  }
  for (int i = 1; i < cnt.size(); i++) {
    cnt[i] += cnt[i - 1];
  }
  auto f = [&](int start) -> long long {
    int l = start, r = cnt.size() - 1;
    while (r - l > 1) {
      int mid = (l + r) / 2;
      if (cnt[mid] - cnt[start] < c) {
        l = mid;
      } else {
        r = mid;
      }
    }
    return cnt[r] - cnt[start];
  };
  long long ans = 0;
  for (int i = 0; i < pos.size() - 1; i++) {
    long long x = (pos[i + 1] - pos[i]) * f(i);
    ans += x;
  }
  ans += (pos[0] + (m - pos[pos.size() - 1])) * f(pos.size() - 1);
  cout << ans << endl;
  return 0;
}
