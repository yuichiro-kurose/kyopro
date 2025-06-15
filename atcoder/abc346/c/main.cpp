// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  long long ans = (long long) k * (k + 1) / 2;
  set<int> st;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a > k) {
      continue;
    }
    if (!st.count(a)) {
      ans -= a;
    }
    st.insert(a);
  }
  cout << ans << endl;
}
