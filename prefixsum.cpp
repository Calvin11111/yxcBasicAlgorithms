#include "iostream"
#include <cstdio>
using namespace std;
const int N = 1e6 + 10;
int n, m;
int a[N], s[N];
int l, r;

int main() {
  scanf("%d%d", &n, &m);
  for (int i = 1; i <= n; i++)
    scanf("%d", &a[i]);
  for (int i = 1; i <= n; i++)
    s[i] = s[i - 1] + a[i];

  while (m--) {
    scanf("%d%d", &l, &r);
    int sum = s[r] - s[l] + a[l];
    cout << sum << endl;
  }

  return 0;
}
