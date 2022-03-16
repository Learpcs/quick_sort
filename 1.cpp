#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> a{5, 1, 3, 2, 4};

void quick_sort(int l, int r)
{
	if(r - l <= 0)
		return;
	int pivot = a[l];
	int pl = l, pr = r;
	while(pl <= pr)
	{
		while(a[pl] < pivot)
			++pl;
		while(a[pr] >= pivot)
			--pr;
		if(pl < pr)
			swap(a[pl], a[pr]);

	}
	quick_sort(l, pl - 1);
	quick_sort(pl, r);
}

int main()
{
	cout << "lol" << flush;
	quick_sort(0, a.size() - 1);
	cout << "lol";
	for(int& x : a)
		cout << x << ' ';
}
