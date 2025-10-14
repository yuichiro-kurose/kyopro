// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    set<int> st;
    while (n--) {
      int b;
      cin >> b;
      st.insert(b);
    }
    cout << st.size() << endl;
  }
  return 0;
}
