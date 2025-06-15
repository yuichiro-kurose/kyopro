// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

vector<int> dx = {-1, -2, -2, -1, 1, 2, 2, 1};
vector<int> dy = {2, 1, -1, -2, -2, -1, 1, 2};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  set<pair<int, int>> st;
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    st.insert(make_pair(a, b));
    for (int d = 0; d < 8; d++) {
      int na = a + dx[d], nb = b + dy[d];
      if (na < 1 || na > n || nb < 1 || nb > n) {
        continue;
      }
      st.insert(make_pair(na, nb));
    }
  }
  long long ans = (long long) n * n - st.size();
  cout << ans << endl;
  return 0;
}
