// author: Yuichiro Kurose

long long C(int n, int r) {
  long long a = 1, b = 1;
  for (int i = 1; i <= n; i++) {
    a = (a * i) % mod;
  }
  for (int i = 1; i <= r; i++) {
    b = (b * i) % mod;
  }
  for (int i = 1; i <= n - r; i++) {
    b = (b * i) % mod;
  }
  return a * Pow(b, mod - 2) % mod;
}
