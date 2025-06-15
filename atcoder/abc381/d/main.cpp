// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int ans = 0;
  auto f = [&](int x) -> void {
    int now = 0;
    queue<int> que;
    set<int> st;
    for (int i = x; i < n - 1; i += 2) {
      if (a[i] != a[i + 1]) {
        now = 0;
        que = queue<int>();
        st = set<int>();
      } else {
        now += 2;
        if (st.count(a[i])) {
          while (que.front() != a[i]) {
            now -= 2;
            st.erase(que.front());
            que.pop();
          }
          now -= 2;
          st.erase(a[i]);
          que.pop();
        }
        que.push(a[i]);
        st.insert(a[i]);
      }
      ans = max(ans, now);
    }
  };
  f(0);
  f(1);
  cout << ans << endl;
  return 0;
}
