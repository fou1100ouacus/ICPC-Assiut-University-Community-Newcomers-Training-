// L.GCD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int fnum, secnum, gcd;
	cin >> fnum >> secnum;
	if (secnum > fnum)
	{
		int temp = secnum;
		secnum = fnum;
		fnum = temp;
	}
	for (int i = 1; i <= fnum; i++)
	{
		if (fnum % i == 0 && secnum % i == 0)
		{
			gcd = i;
		}
	}
	cout << gcd;

}

