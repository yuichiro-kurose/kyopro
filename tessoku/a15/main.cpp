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
  vector<int> uni_a = a;
  sort(uni_a.begin(), uni_a.end());
  uni_a.erase(unique(uni_a.begin(), uni_a.end()), uni_a.end());
  for (int i = 0; i < n; i++) {
    int b = lower_bound(uni_a.begin(), uni_a.end(), a[i]) - uni_a.begin() + 1;
    if (i > 0) {
      cout << ' ';
    }
    cout << b;
  }
  cout << endl;
  return 0;
}
