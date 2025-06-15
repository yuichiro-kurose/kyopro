// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<int> cnt(13, 0);
  for (int i = 0; i < 7; i++) {
    int a;
    cin >> a;
    cnt[a - 1]++;
  }
  sort(cnt.rbegin(), cnt.rend());
  if (cnt[0] >= 3 && cnt[1] >= 2) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
