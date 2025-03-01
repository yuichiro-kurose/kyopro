// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  set<int> ans;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    ans.insert(a);
  }
  for (int x : ans) {
    cout << x << endl;
  }
  return 0;
}
