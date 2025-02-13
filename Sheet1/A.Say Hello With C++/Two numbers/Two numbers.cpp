// Two numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
	double n1, n2;
	cin >> n1 >> n2;
	double res = n1/ n2;
	cout << "floar " << n1 << " / " << n2 <<" = " << floor(res)<<endl;
	cout << "ceil " << n1 << " / " << n2 <<" = " << ceil(res)<<endl;
	cout << "round " << n1 << " / " << n2 <<" = " << round(res)<<endl;



}

