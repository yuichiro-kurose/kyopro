// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

long long f(string s, string t, set<int> pa, set<int> pb) {
  long long res = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != t[i] && t[i] == 'A') {
      auto itr = pa.lower_bound(i);
      int idx = *itr;
      res += idx - i;
      pa.erase(idx);
      pa.insert(i);
      pb.erase(i);
      pb.insert(idx);
      swap(s[i], s[idx]);
    }
    if (s[i] != t[i] && t[i] == 'B') {
      auto itr = pb.lower_bound(i);
      int idx = *itr;
      res += idx - i;
      pa.erase(i);
      pa.insert(idx);
      pb.erase(idx);
      pb.insert(i);
      swap(s[i], s[idx]);
    }
  }
  return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  string s;
  cin >> s;
  set<int> pa, pb;
  string ab = "", ba = "";
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'A') {
      pa.insert(i);
    } else {
      pb.insert(i);
    }
    if (i % 2 == 0) {
      ab += 'A';
      ba += 'B';
    } else {
      ab += 'B';
      ba += 'A';
    }
  }
  long long ans = min(f(s, ab, pa, pb), f(s, ba, pa, pb));
  cout << ans << endl;
  return 0;
}
