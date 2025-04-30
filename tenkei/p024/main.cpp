// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  long long cnt = 0;
  for (int i = 0; i < n; i++) {
    int b;
    cin >> b;
    cnt += abs(a[i] - b);
  }
  k -= cnt;
  if (k >= 0 && !(k & 1)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
