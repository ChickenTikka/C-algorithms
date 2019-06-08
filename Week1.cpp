#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

const int N = 40;

template <class T> 
void sum(T *p, int n, vector<T> d) {
	*p = 0;
	for (int i = 0; i < n; i++) {
		*p += d[i];
	}
}

int main() {
	int i, accum = 0;
	vector <int> data;
	for (i = 0; i < N; i++) {
		data[i] = i;
	}
	sum(&accum, N, data);
	cout << "sum is %d\n", accum;
	system("PAUSE");
	return 0;
}
