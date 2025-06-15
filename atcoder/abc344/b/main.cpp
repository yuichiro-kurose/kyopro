// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<int> ans;
  while (true) {
    int a;
    cin >> a;
    ans.push_back(a);
    if (a == 0) {
      break;
    }
  }
  reverse(ans.begin(), ans.end());
  for (int x : ans) {
    cout << x << endl;
  }
  return 0;
}
