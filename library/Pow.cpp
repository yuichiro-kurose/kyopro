// author: Yuichiro Kurose

long long Pow(long long a, long long b) {
  long long ret = 1;
  while (b > 0) {
    if (b & 1) {
      ret = ret * a % MOD;
    }
    a = a * a % MOD;
    b >>= 1;
  }
  return ret;
}
