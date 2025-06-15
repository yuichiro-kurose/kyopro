// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> ans;
  set<string> st;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (!st.count(s)) {
      st.insert(s);
      ans.push_back(i + 1);
    }
  }
  for (int x : ans) {
    cout << x << endl;
  }
  return 0;
}
