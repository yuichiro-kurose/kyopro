// author: Yuichiro Kurose

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
    node.resize(2 * n - 1, inf);
    for (int i = 0; i < sz; i++) {
      node[i + n - 1] = v[i];
    }
    for (int i = n - 2; i >= 0; i--) {
      node[i] = min(node[i * 2 + 1], node[i * 2 + 2]);
    }
  }
  void update(int k, int x) {
    k += (n - 1);
    node[k] = x;
    while (k > 0) {
      k = (k - 1) / 2;
      node[k] = min(node[k * 2 + 1], node[k * 2 + 2]);
    }
  }
  int find(int a, int b, int k = 0, int l = 0, int r = -1) {
    if (r < 0) {
      r = n;
    }
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
