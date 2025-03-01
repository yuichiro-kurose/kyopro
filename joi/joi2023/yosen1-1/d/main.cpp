// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> cnt(n * 2, 0);
  for (int i = 0; i < n * 2 - 1; i++) {
    int a;
    cin >> a;
    cnt[a - 1]++;
  }
  for (int i = 0; i < n * 2; i++) {
    if (cnt[i] == 1) {
      cout << i + 1 << endl;
    }
  }
  return 0;
}
