#include "pch.h"
#include <iostream>
#include <stdio.h>

using namespace std;

template <class T>

void swap(T &i, T &j) {
	i = i + j;
	j = i - j;
	i = i - j;
}

int main()
{
	int a, b;
	cout << "Enter numbers to swap: " << endl;
	cin >> a >> b;
	std::swap(a, b);
	cout << "swapped numbers are: " << a << " " << b << endl;
	system("PAUSE");
	return 0;
}
