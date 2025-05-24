// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

class SegmentTreeMin {
private:
  int n;
  vector<int> node;
public:
  SegmentTreeMin(vector<int> v) {
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

class SegmentTreeMax {
private:
  int n;
  vector<int> node;
public:
  SegmentTreeMax(vector<int> v) {
    int sz = v.size();
    n = 1;
    while (n < sz) {
      n *= 2;
    }
    node.resize(2 * n - 1, -inf);
    for (int i = 0; i < sz; i++) {
      node[i + n - 1] = v[i];
    }
    for (int i = n - 2; i >= 0; i--) {
      node[i] = max(node[i * 2 + 1], node[i * 2 + 2]);
    }
  }
  int find(int a, int b, int k = 0, int l = 0, int r = -1) {
    if (r < 0) {
      r = n;
    }
    if (b <= l || r <= a) {
      return -inf;
    }
    if (a <= l && r <= b) {
      return node[k];
    }
    int vl = find(a, b, k * 2 + 1, l, (l + r) / 2);
    int vr = find(a, b, k * 2 + 2, (l + r) / 2, r);
    return max(vl, vr);
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i].first;
    p[i].second = i;
  }
  sort(p.begin(), p.end());
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    v[i] = p[i].second;
  }
  SegmentTreeMin seg1(v);
  SegmentTreeMax seg2(v);
  int ans = inf;
  for (int i = 0; i < n - k + 1; i++) {
    ans = min(ans, seg2.find(i, i + k) - seg1.find(i, i + k));
  }
  cout << ans << endl;
  return 0;
}
