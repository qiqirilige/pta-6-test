// 3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include"iostream"
#include"iomanip"
using namespace std;

int main()
{
	float a, b;
	int c;
	char d;
	cin >> a >> c >> d >> b;
	cout << d << " " << c << " ";
	cout << fixed << setprecision(2) << a << " " << b << endl;
	return 0;
}

