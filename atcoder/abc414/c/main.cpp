// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a;
  long long n;
  cin >> a >> n;
  vector<string> list;
  for (int i = 1; i <= 1000000; i++) {
    string s = to_string(i);
    string t = s;
    reverse(t.begin(), t.end());
    list.push_back(s + t);
    s.pop_back();
    list.push_back(s + t);
  }
  long long ans = 0;
  for (string s : list) {
    long long x = stol(s), tmp = x;
    string t = "";
    while (tmp > 0) {
      t += (char) ((tmp % a) + '0');
      tmp /= a;
    }
    reverse(t.begin(), t.end());
    string t2 = t;
    reverse(t2.begin(), t2.end());
    if (x <= n && t == t2) {
      ans += x;
    }
  }
  cout << ans << endl;
  return 0;
}
