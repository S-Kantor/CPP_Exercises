#include "stdafx.h"
#include <iostream>
#include <stdio.h>

using namespace std;
// Exercise taken from https://developers.google.com/edu/c++/getting-started #5



int getNum() //gets a number from a user and validates the input
{
	int x;
	do
	{
		cout << "Please enter a 3 digit number: ";
		cin >> x;
	} while (!((x > 100) && (x < 1000)));
	return x;
}

int reverseNum(int number)
{
	char num[4];
	_itoa(number, num, 10);

	char reversedNum[4] = { 0 };
	reversedNum[0] = num[2];
	reversedNum[1] = num[1];
	reversedNum[2] = num[0];

	int revNum;

	sscanf(reversedNum, "%d", &revNum);
	return revNum;
}

int main()
{
	int x = getNum(); //gets the number
	cout << "input number: " << x << endl;

	int y = reverseNum(x);
	cout << "reverse number " << y << endl;

	int z = x - y;
	cout << "subtract " << z << endl;

	cout << "revere again"  << reverseNum(z);
	cin >> x;
	return 0;
}