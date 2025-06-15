// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int> c(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> c[i];
  }
  vector<long long> sum1(n + 1, 0), sum2(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    sum1[i] = sum1[i - 1];
    sum2[i] = sum2[i - 1];
    if (s[i - 1] - '0' != i % 2) {
      sum1[i] += c[i];
    } else {
      sum2[i] += c[i];
    }
  }
  long long ans = inf;
  for (int i = 1; i <= n - 1; i++) {
    {
      long long now = 0;
      if (s[i - 1] != '0') {
        now += c[i];
      }
      if (s[i] != '0') {
        now += c[i + 1];
      }
      if (i & 1) {
        now += sum2[i - 1];
        now += sum1[n] - sum1[i + 1];
      } else {
        now += sum1[i - 1];
        now += sum2[n] - sum2[i + 1];
      }
      ans = min(ans, now);
    }
    {
      long long now = 0;
      if (s[i - 1] != '1') {
        now += c[i];
      }
      if (s[i] != '1') {
        now += c[i + 1];
      }
      if (i & 1) {
        now += sum1[i - 1];
        now += sum2[n] - sum2[i + 1];
      } else {
        now += sum2[i - 1];
        now += sum1[n] - sum1[i + 1];
      }
      ans = min(ans, now);
    }
  }
  cout << ans << endl;
  return 0;
}
