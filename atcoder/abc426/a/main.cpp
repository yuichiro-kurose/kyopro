// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string x, y;
  cin >> x >> y;
  map<string, int> mp;
  mp["Ocelot"] = 0;
  mp["Serval"] = 1;
  mp["Lynx"] = 2;
  if (mp[x] >= mp[y]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
