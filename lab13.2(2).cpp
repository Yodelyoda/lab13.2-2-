
#include "iostream"
#include "limits.h"
#include "windows.h"
#include <cstdarg>
using namespace std;

int nod2(int n, int m)
{
	if (m == 0)
		return n;
	if (n > m)
		return nod2(m, n - m);
	else
		return nod2(n, m - n);
}
int nod(int count, ...)
{
	if (count == 0)
		return 0;
	va_list args;
	va_start(args, count);
	int n = va_arg(args, int);
	for (int i = 0; i < count; ++i) {
		n = nod2(n, va_arg(args, int));
	}
	va_end(args);
	return n;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n ;
	int* arr;
	int nod_;
	cout << "¬вед≥ть к≥льк≥сть чисел" << endl;
	cin >> n;
	arr = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "¬вед≥ть " << i + 1 << " число" << endl;
		cin >> arr[i];
	}
	if (n >= 2) {
		nod_ = nod(arr[0], arr[1]);
	}
	else 
	{
	nod_ = arr[0];
	}
	for (int i = 2; i < n; i++) {
		nod_ = nod(nod_, arr[i]);
	}
	cout << "найб≥льший сп≥льний д≥льник " << nod_ << endl;
	system("pause");
	return 0;
}