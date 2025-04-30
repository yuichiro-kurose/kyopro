// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<pair<string, int>> x(n);
  int t = 0;
  for (int i = 0; i < n; i++) {
    string s;
    int c;
    cin >> s >> c;
    x[i].first = s;
    x[i].second = c;
    t += c;
  }
  sort(x.begin(), x.end());
  cout << x[t % n].first << endl;
  return 0;
}
