// D.Fixed Password.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
	// solution number 1
	
	/*int res1, int res2;
	 string number; cin >> number;
 int  size = number.size();
	char reversedNum[number.size()];
	int counter = 0;
	for (int i = size-1; i >=0; i--)
	{
		reversedNum[counter] = number[i];
		counter++;

	}
	stringstream string1;
	string1 << number;
	string1 >> res1;

	stringstream string2;
	string2 << reversedNum;
	string2 >> res2;

	cout << res2 << endl;

*/




	// sec solution

	int num;
	cin >> num;
	int res = 0;
	while (num>0)//121121
	{
		int lastdigit =num % 10;
		res = lastdigit + res * 10;
			if (res == num)
			{
				cout << res << endl;
				cout << "YES";
			}
			else
			{
				cout << res << endl;

				cout << "NO";
			}
			num / 10;

	}



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
