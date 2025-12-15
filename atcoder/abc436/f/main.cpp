// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

class SegmentTree {
private:
  int n;
  vector<int> node;
public:
  SegmentTree(vector<int> v) {
    int sz = v.size();
    n = 1;
    while (n < sz) {
      n *= 2;
    }
    node.resize(2 * n - 1, 0);
    for (int i = 0; i < sz; i++) {
      node[i + n - 1] = v[i];
    }
    for (int i = n - 2; i >= 0; i--) {
      node[i] = node[i * 2 + 1] + node[i * 2 + 2];
    }
  }
  void update(int k, int x) {
    k += (n - 1);
    node[k] = x;
    while (k > 0) {
      k = (k - 1) / 2;
      node[k] = node[k * 2 + 1] + node[k * 2 + 2];
    }
  }
  int sum(int a, int b, int k = 0, int l = 0, int r = -1) {
    if (r < 0) {
      r = n;
    }
    if (b <= l || r <= a) {
      return 0;
    }
    if (a <= l && r <= b) {
      return node[k];
    }
    int vl = sum(a, b, k * 2 + 1, l, (l + r) / 2);
    int vr = sum(a, b, k * 2 + 2, (l + r) / 2, r);
    return vl + vr;
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    b[i]--;
    a[b[i]] = i;
  }
  SegmentTree seg(vector<int>(n, 0));
  long long ans = 0;
  for (int lev = 0; lev < n; lev++) {
    int p = a[lev];
    seg.update(p, 1);
    long long l = seg.sum(0, p + 1), r = seg.sum(p, n);
    ans += l * r;
  }
  cout << ans << endl;
  return 0;
}
