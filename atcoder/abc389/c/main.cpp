// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<long long> snake(1, 0);
  int left = 0;
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int type;
    cin >> type;
    if (type == 1) {
      int l;
      cin >> l;
      snake.push_back(l + snake.back());
    }
    if (type == 2) {
      left++;
    }
    if (type == 3) {
      int k;
      cin >> k;
      cout << snake[left + k - 1] - snake[left] << endl;
    }
  }
  return 0;
}
