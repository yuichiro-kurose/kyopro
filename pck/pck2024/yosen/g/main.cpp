// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, x, y, r, t;
  cin >> n >> x >> y >> r >> t;
  double rad_t = M_PI / 180 * t;
  for (int i = 0; i < n; i++) {
    int px, py, qx, qy;
    cin >> px >> py >> qx >> qy;
    px -= x;
    py -= y;
    qx -= x;
    qy -= y;
    double pd = atan2(py, px), qd = atan2(qy, qx);
    if (rad_t > 0 && pd < 0) {
      pd += M_PI * 2;
    }
    if (rad_t > 0 && qd < 0) {
      qd += M_PI * 2;
    }
    if (px * px + py * py <= r * r && rad_t <= pd && pd <= rad_t + M_PI ||
        qx * qx + qy * qy <= r * r && rad_t <= qd && qd <= rad_t + M_PI) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}
