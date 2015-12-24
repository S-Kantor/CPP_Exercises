// Accelerate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// Exercise taken from https://developers.google.com/edu/c++/next-steps #3

void Accelerate(int& speed, int velocity)
{
	speed += velocity;
};

int main()
{
	int speed = 10;
	int amount = 30;

	cout << "Initial Speed is: " << speed << endl;
	cout << "Amounted add is: " << amount << endl;
	Accelerate(speed, amount);
	cout << "Final speed is: " << speed;

	getchar();
    return 0;
}

