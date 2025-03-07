// author: Yuichiro Kurose

class LazySegmentTree {
private:
  int n;
  vector<int> node, lazy;
  vector<bool> lazy_flag;
public:
  LazySegmentTree(vector<int> v) {
    int sz = v.size();
    n = 1;
    while (n < sz) {
      n *= 2;
    }
    node.resize(2 * n - 1);
    lazy.resize(2 * n - 1, inf);
    lazy_flag.resize(2 * n - 1, false);
    for (int i = 0; i < sz; i++) {
      node[i + n - 1] = v[i];
    }
    for (int i = n - 2; i >= 0; i--) {
      node[i] = min(node[i * 2 + 1], node[i * 2 + 2]);
    }
  }
  void LazyEvaluate(int k, int l, int r) {
    if (lazy_flag[k]) {
      node[k] = lazy[k];
      if (r - l > 1) {
        lazy[k * 2 + 1] = lazy[k * 2 + 2] = lazy[k];
        lazy_flag[k * 2 + 1] = lazy_flag[k * 2 + 2] = true;
      }
      lazy_flag[k] = false;
    }
  }
  void update(int a, int b, int x, int k = 0, int l = 0, int r = -1) {
    if (r < 0) {
      r = n;
    }
    LazyEvaluate(k, l, r);
    if (b <= l || r <= a) {
      return;
    }
    if (a <= l && r <= b) {
      lazy[k] = x;
      lazy_flag[k] = true;
      LazyEvaluate(k, l, r);
    } else {
      update(a, b, x, k * 2 + 1, l, (l + r) / 2);
      update(a, b, x, k * 2 + 2, (l + r) / 2, r);
      node[k] = min(node[k * 2 + 1], node[k * 2 + 2]);
    }
  }
  int find(int a, int b, int k = 0, int l = 0, int r = -1) {
    if (r < 0) {
      r = n;
    }
    LazyEvaluate(k, l, r);
    if (b <= l || r <= a) {
      return inf;
    }
    if (a <= l && r <= b) {
      return node[k];
    }
    int vl = find(a, b, k * 2 + 1, l, (l + r) / 2);
    int vr = find(a, b, k * 2 + 2, (l + r) / 2, r);
    return min(vl, vr);
  }
};
