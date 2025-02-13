// X. Two intervals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n1, n2, n3, n4, begin, end;
	cin >> n1 >> n2 >> n3 >> n4;
	if (n3<n1 && n4<n1 || n3 > n2 && n4> n2)
	{
		cout << -1;

	}
	else
	{

		if ( n3 > n1)
		{
			begin = n3;
		}
		else {
			begin = n1;
		}
		if (n2 >n4)
		{
			end = n4;
		}
		else
		{
			end = n2;

		}
		cout << begin <<" " << end;
	}


	







}
