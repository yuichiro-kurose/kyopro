// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  queue<int> que;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    que.push(a);
  }
  int x = k, ans = 0;
  while (true) {
    if (que.empty()) {
      ans++;
      break;
    }
    int a = que.front();
    if (x < a) {
      ans++;
      x = k;
    } else {
      x -= a;
      que.pop();
    }
  }
  cout << ans << endl;
  return 0;
}
