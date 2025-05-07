// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  long long t;
  cin >> n >> t;
  string s;
  cin >> s;
  vector<long long> a, b;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (s[i] == '0') {
      b.push_back(x);
    }
    if (s[i] == '1') {
      a.push_back(x);
    }
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  long long ans = 0;
  for (int num : a) {
    int p = lower_bound(b.begin(), b.end(), num) - b.begin();
    int q = upper_bound(b.begin(), b.end(), num + t * 2) - b.begin();
    ans += q - p;
  }
  cout << ans << endl;
  return 0;
}
