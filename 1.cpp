#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

vector<int> a{5, 1, 1, 1, 4};

void quick_sort(int l, int r) {
  int pivot = INT_MAX;
  for (int i = l + 1; i <= r; ++i) {
    if (a[i] != a[l]) {
      pivot = max(a[i], a[l]);
      break;
    }
  }
  if (pivot == INT_MAX) {
    return;
  }
  int pl = l, pr = r;
  while (pl <= pr) {
    while (a[pl] < pivot)
      ++pl;
    while (a[pr] >= pivot)
      --pr;
    if (pl < pr)
      swap(a[pl], a[pr]);
  }
  quick_sort(l, pl - 1);
  quick_sort(pl, r);
}

int main() {
  quick_sort(0, a.size() - 1);
  for (int &x : a)
    cout << x << ' ';
}
