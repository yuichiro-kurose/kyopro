// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> vec;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    vec.push_back(a - b);
    vec.push_back(b);
  }
  sort(vec.rbegin(), vec.rend());
  long long ans = 0;
  for (int i = 0; i < k; i++) {
    ans += vec[i];
  }
  cout << ans << endl;
  return 0;
}
