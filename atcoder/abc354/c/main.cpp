// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<tuple<int, int, int>> x(n);
  set<int> st;
  for (int i = 0; i < n; i++) {
    int a, c;
    cin >> a >> c;
    x[i] = make_tuple(a, c, i);
    st.insert(c);
  }
  sort(x.begin(), x.end());
  vector<int> ans;
  for (auto tup : x) {
    int a = get<0>(tup), c = get<1>(tup), i = get<2>(tup);
    st.erase(c);
    if (st.empty() || *begin(st) > c) {
      ans.push_back(i + 1);
    }
  }
  sort(ans.begin(), ans.end());
  int m = ans.size();
  cout << m << endl;
  for (int i = 0; i < m; i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << ans[i];
  }
  cout << endl;
  return 0;
}
