// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  string s;
  cin >> s;
  long long ans = 0;
  {
    // J
    long long now = 0, cnt_j = 1, cnt_i = 0;
    for (char c : s) {
      if (c == 'I') {
        cnt_i++;
      }
    }
    for (char c : s) {
      if (c == 'J') {
        cnt_j++;
      }
      if (c == 'O') {
        now += cnt_j * cnt_i;
      }
      if (c == 'I') {
        cnt_i--;
      }
    }
    ans = max(ans, now);
  }
  {
    // O
    long long now = 0, cnt_j = 0, cnt_i = 0, max_val = 0;
    for (char c : s) {
      if (c == 'I') {
        cnt_i++;
      }
    }
    for (char c : s) {
      if (c == 'J') {
        cnt_j++;
      }
      if (c == 'O') {
        now += cnt_j * cnt_i;
      }
      max_val = max(max_val, cnt_j * cnt_i);
      if (c == 'I') {
        cnt_i--;
      }
    }
    now += max_val;
    ans = max(ans, now);
  }
  {
    // I
    long long now = 0, cnt_j = 0, cnt_i = 1;
    for (char c : s) {
      if (c == 'I') {
        cnt_i++;
      }
    }
    for (char c : s) {
      if (c == 'J') {
        cnt_j++;
      }
      if (c == 'O') {
        now += cnt_j * cnt_i;
      }
      if (c == 'I') {
        cnt_i--;
      }
    }
    ans = max(ans, now);
  }
  cout << ans << endl;
  return 0;
}