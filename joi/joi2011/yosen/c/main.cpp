// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const vector<int> color = {3, 1, 2};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  for (int i = 0; i < k; i++) {
    int a, b;
    cin >> a >> b;
    int x = min({a, b, n - a + 1, n - b + 1});
    cout << color[x % 3] << endl;
  }
  return 0;
}
