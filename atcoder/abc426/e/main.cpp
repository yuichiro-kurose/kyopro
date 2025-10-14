// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

struct P {
  double x, y;
};

double dist(P a, P b) {
  return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    P ts, tg;
    P as, ag;
    cin >> ts.x >> ts.y >> tg.x >> tg.y;
    cin >> as.x >> as.y >> ag.x >> ag.y;
    double tl = dist(ts, tg);
    double al = dist(as, ag);
    double td = atan2(tg.y - ts.y, tg.x - ts.x);
    double ad = atan2(ag.y - as.y, ag.x - as.x);
    auto f = [&](double time) -> double {
      P tp, ap;
      if (time >= tl) {
        tp = tg;
      } else {
        tp.x = ts.x + time * cos(td);
        tp.y = ts.y + time * sin(td);
      }
      if (time >= al) {
        ap = ag;
      } else {
        ap.x = as.x + time * cos(ad);
        ap.y = as.y + time * sin(ad);
      }
      return dist(tp, ap);
    };
    auto search = [&](double l, double r) -> double {
      double left = l, right = r;
      while (r - l > 1e-9) {
        double c1 = (l + l + r) / 3;
        double c2 = (l + r + r) / 3;
        if (f(c1) < f(c2)) {
          r = c2;
        } else {
          l = c1;
        }
      }
      return min({f(left), f(l), f(right)});
    };
    double ans1 = search(0, min(tl, al));
    double ans2 = search(min(tl, al), max(tl, al));
    cout << fixed << setprecision(9) << min(ans1, ans2) << endl;
  }
  return 0;
}
