// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, t;
  cin >> n >> t;
  vector<int> row(n, 0), col(n, 0);
  int dia1 = 0, dia2 = 0;
  int ans = -1;
  for (int i = 0; i < t; i++) {
    int a;
    cin >> a;
    a--;
    int x = a / n, y = a % n;
    row[x]++;
    col[y]++;
    if (x == y) {
      dia1++;
    }
    if (x + y == n - 1) {
      dia2++;
    }
    if (ans == -1 && (row[x] == n || col[y] == n || dia1 == n || dia2 == n)) {
      ans = i + 1;
    }
  }
  cout << ans << endl;
  return 0;
}
