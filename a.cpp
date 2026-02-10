#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  int z = n;
  vector<int> a;
  while (z != 0) {
    int digit = z % 10;
    z /= 10;
    if (digit != 0) {
      a.push_back(digit);
    }
  }

  if (a.size() == 0) {
    cout << n << '\n';
  }
  else {
    int mul = 1, g = a[0];
    for (auto x : a) {
      mul *= x;
      g = __gcd(g, x);
    }

    int l = mul / g;

    cout << n + (l - n % l) << '\n';
  }

}

int32_t main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  int T; cin >> T;
  while (T--) solve();
  return 0;
}