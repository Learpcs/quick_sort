#include <bits/stdc++.h>
using namespace std;

void quick_sort(int l, int r, vector<int> &a) {
  int pivot = a[l];
  int pl = l, pr = r;
  while (pl <= pr) {
    while (a[pl] < pivot && pl <= r)
      ++pl;
    while (a[pr] >= pivot && pr >= l)
      --pr;
    if (pl < pr)
      swap(a[pl], a[pr]);
  }
  if (l < pr)
    quick_sort(l, pr, a);
  for (int i = pl; i < r; ++i)
    if (a[i] == pivot)
      swap(a[i], a[pl++]);
  if (pl < r)
    quick_sort(pl, r, a);
}

int main() {
  vector<int> a{0, 1, 0, 1, 0, 2, 1, 0, 0};
  quick_sort(0, a.size() - 1, a);
  for (int &x : a)
    cout << x << ' ';
}
