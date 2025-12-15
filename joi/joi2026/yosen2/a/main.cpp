// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.rbegin(), a.rend());
  int sum = 0;
  for (int i = 0; i < n;) {
    int score = a[i];
    int cnt = 1;
    for (int j = i + 1; j < n; j++) {
      if (a[j] == score) {
        cnt++;
      } else {
        break;
      }
    }
    if (sum + cnt > n / 2) {
      if (abs(sum + cnt - (n - sum - cnt)) < abs(sum - (n - sum))) {
        cout << a[i] << endl;
        return 0;
      } else {
        cout << a[i - 1] << endl;
        return 0;
      }
    }
    sum += cnt;
    i += cnt;
  }
  return 0;
}
