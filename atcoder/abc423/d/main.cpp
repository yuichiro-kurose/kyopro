// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n, k;
  cin >> n >> k;
  queue<tuple<ll, ll, ll>> que;
  for (int i = 0; i < n; i++) {
    ll a, b, c;
    cin >> a >> b >> c;
    que.push(make_tuple(a, b, c));
  }
  priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> p_que;
  ll time = 0, cnt = 0;
  while (!que.empty()) {
    auto [a, b, c] = que.front();
    que.pop();
    time = max(time, a);
    while (!p_que.empty() && p_que.top().first <= time) {
      auto [t, num] = p_que.top();
      p_que.pop();
      cnt -= num;
    }
    while (!p_que.empty() && cnt + c > k) {
      auto [t, num] = p_que.top();
      p_que.pop();
      time = t;
      cnt -= num;
    }
    cout << time << endl;
    cnt += c;
    p_que.push(make_pair(time + b, c));
  }
  return 0;
}
