#pragma once
#include <iostream>
using namespace std;

bool kiemtraso9(int n) {
	while (n > 0) {
		int temp = n % 10;
		if ((temp == 9)||(temp == 0)) return 0;
		else n = n / 10;
	}
	return 1;	
}
bool sokhacnhau(int n) {
	int a, b, c, d, e, f, g, h;
	a = n % 10;
	b = (n / 10) % 10;
	c = (n / 100) % 10;
	d = (n / 1000) % 10;
	e = (n / 10000) % 10;
	f = (n / 100000) % 10;
	g = (n / 1000000) % 10;
	h = (n / 10000000) % 10;
	if ((a != b) && (a != c) && (a != d) && (a != e) && (a != f) && (a != g) && (a != h)
		&& (b != c) && (b != d) && (b != e) && (b != f) && (b != g) && (b != h)
		&& (c != d) && (c != e) && (c != f) && (c != g) && (c != h)
		&& (d != e) && (d != f) && (d != g) && (d != h)
		&& (e != f) && (e != g) && (e != h)
		&& (f != g) && (f != h)
		&& (g != h))
		return 1;
	else return 0;
}
