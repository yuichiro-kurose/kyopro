// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class LazySegmentTree {
private:
  int n;
  vector<ll> node, lazy;
public:
  LazySegmentTree(vector<ll> v) {
    int sz = v.size();
    n = 1;
    while (n < sz) {
      n *= 2;
    }
    node.resize(2 * n - 1);
    lazy.resize(2 * n - 1, 0);
    for (int i = 0; i < sz; i++) {
      node[i + n - 1] = v[i];
    }
    for (int i = n - 2; i >= 0; i--) {
      node[i] = node[i * 2 + 1] + node[i * 2 + 2];
    }
  }
  void LazyEvaluate(int k, int l, int r) {
    if (lazy[k] != 0) {
      node[k] += lazy[k];
      if (r - l > 1) {
        lazy[k * 2 + 1] += lazy[k] / 2;
        lazy[k * 2 + 2] += lazy[k] / 2;
      }
      lazy[k] = 0;
    }
  }
  void add(int a, int b, ll x, int k = 0, int l = 0, int r = -1) {
    if (r < 0) {
      r = n;
    }
    LazyEvaluate(k, l, r);
    if (b <= l || r <= a) {
      return;
    }
    if (a <= l && r <= b) {
      lazy[k] += (r - l) * x;
      LazyEvaluate(k, l, r);
    } else {
      add(a, b, x, k * 2 + 1, l, (l + r) / 2);
      add(a, b, x, k * 2 + 2, (l + r) / 2, r);
      node[k] = node[k * 2 + 1] + node[k * 2 + 2];
    }
  }
  ll getsum(int a, int b, int k = 0, int l = 0, int r = -1) {
    if (r < 0) {
      r = n;
    }
    LazyEvaluate(k, l, r);
    if (b <= l || r <= a) {
      return 0;
    }
    if (a <= l && r <= b) {
      return node[k];
    }
    ll vl = getsum(a, b, k * 2 + 1, l, (l + r) / 2);
    ll vr = getsum(a, b, k * 2 + 2, (l + r) / 2, r);
    return vl + vr;
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  LazySegmentTree seg(vector<ll>(n, 0));
  while (q--) {
    int type;
    cin >> type;
    if (type == 0) {
      int s, t, x;
      cin >> s >> t >> x;
      seg.add(s - 1, t, x);
    }
    if (type == 1) {
      int s, t;
      cin >> s >> t;
      cout << seg.getsum(s - 1, t) << endl;
    }
  }
  return 0;
}
