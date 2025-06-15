// author: Yuichiro Kurose

vector<int> Manachar(string s) {
  vector<int> r(s.size());
  int i = 0, j = 0;
  while (i < s.size()) {
    while (i - j >= 0 && i + j < s.size() && s[i - j] == s[i + j]) {
      j++;
    }
    r[i] = j;
    int k = 1;
    while (i - k >= 0 && k + r[i - k] < j) {
      r[i + k] = r[i - k];
      k++;
    }
    i += k;
    j -= k;
  }
  return r;
}
