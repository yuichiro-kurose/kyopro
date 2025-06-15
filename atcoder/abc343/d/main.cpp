// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, t;
  cin >> n >> t;
  map<long long, int> mp;
  mp[0] = n;
  vector<long long> score(n, 0);
  while (t--) {
    int a, b;
    cin >> a >> b;
    a--;
    mp[score[a]]--;
    if (mp[score[a]] == 0) {
      mp.erase(score[a]);
    }
    score[a] += b;
    mp[score[a]]++;
    cout << mp.size() << endl;
  }
  return 0;
}
