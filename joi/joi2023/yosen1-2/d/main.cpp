  // author: Yuichiro Kurose
  
  #include <bits/stdc++.h>
  using namespace std;
  
  #define rep(i, n) for (int i = 0; i < (n); i++)
  
  int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int m; cin >> m;
    vector<int> b(m);
    rep(i, m) cin >> b[i];
    int ans = 0;
    rep(i, n) {
      ans += a[i];
      rep(j, m) if (ans == b[j]) ans = 0;
    }
    cout << ans << endl;
    return 0;
  }
