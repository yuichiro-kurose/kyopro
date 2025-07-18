// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

void solve(int n, int w, int d) {
  vector<pair<int, int>> len;
  len.push_back(make_pair(w, d));
  for (int i = 0; i < n; i++) {
    int p, s;
    cin >> p >> s;
    p--;
    s %= len[p].first + len[p].second;
    pair<int, int> a, b;
    if (s < len[p].first) {
      a = make_pair(s, len[p].second);
      b = make_pair(len[p].first - s, len[p].second);
    } else {
      a = make_pair(len[p].first, s - len[p].first);
      b = make_pair(len[p].first, len[p].first + len[p].second - s);
    }
    for (int j = p; j < len.size() - 1; j++) {
      len[j] = len[j + 1];
    }
    len.pop_back();
    if (a.first * a.second < b.first * b.second) {
      len.push_back(a);
      len.push_back(b);
    } else {
      len.push_back(b);
      len.push_back(a);
    }
  }
  vector<int> ans;
  for (auto p : len) {
    ans.push_back(p.first * p.second);
  }
  sort(ans.begin(), ans.end());
  for (int i = 0; i < ans.size(); i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << ans[i];
  }
  cout << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  while (true) {
    int n, w, d;
    cin >> n >> w >> d;
    if (n == 0 && w == 0 && d == 0) {
      break;
    }
    solve(n, w, d);
  }
  return 0;
}
