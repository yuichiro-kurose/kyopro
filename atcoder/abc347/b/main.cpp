// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int n = s.size();
  set<string> st;
  for (int i = 0; i < n; i++) {
    string t = "";
    for (int j = i; j < n; j++) {
      t += s[j];
      st.insert(t);
    }
  }
  cout << st.size() << endl;
  return 0;
}
