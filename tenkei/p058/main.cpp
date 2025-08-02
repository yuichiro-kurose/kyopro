// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int mod = 100000;

int f(int x) {
  int ret = 0;
  string s = to_string(x);
  for (char c : s) {
    ret += c - '0';
  }
  return ret;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  long long k;
  cin >> n >> k;
  int t = n;
  set<int> st;
  st.insert(t);
  vector<int> log;
  log.push_back(t);
  while (true) {
    t = (t + f(t)) % mod;
    if (st.count(t)) {
      break;
    }
    st.insert(t);
    log.push_back(t);
  }
  int idx = 0;
  for (int i = 0; i < log.size(); i++) {
    if (log[i] == t) {
      idx = i;
    }
  }
  int roop = log.size() - idx;
  if (k > idx) {
    k = idx + ((k - idx) % roop);
  }
  for (int i = 0; i < k; i++) {
    n = (n + f(n)) % mod;
  }
  cout << n << endl;
  return 0;
}
