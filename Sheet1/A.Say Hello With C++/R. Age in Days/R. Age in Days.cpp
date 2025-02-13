

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int days;
	cin >> days;
	// 1 year = 365 days;
	// 1 month = 30 day
	int year, month;
	 year = days / 365;

	days -= 365 * year;
	month = days / 30;

	days -= 30 * month;


	cout << year << " years" << endl;
	cout << month << " months" << endl;
	cout << days << " days" << endl;


}
