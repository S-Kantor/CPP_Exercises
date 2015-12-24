// Bookstore.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

// Example taken from https://developers.google.com/edu/c++/next-steps Warmup-exercise 2 - classes.

/*
FIXES/ Optimizations
- Change the input stream to let the user enter a t/f value only not just string
- Clean up int main (), seperate into more functions
- Take the getter/setter functions and put them into a header file
- Create a typedef for the vector type.
*/

class Book
{
private:
	int code_;
	double price_;
	int enrollment_;
	bool required_;
	bool used_;
public:
	void set(int c, double p, int e, bool r, bool u)
	{
		code_ = c;
		price_ = p;
		enrollment_ = e;
		required_ = r;
		used_ = u;
	}
	int get_code();
	double get_price();
	int get_enrollment();
	bool get_required();
	bool get_used();
};

int Book :: get_code()
{
	return code_;
}

double Book :: get_price()
{
	return price_;
}

int Book :: get_enrollment()
{
	return enrollment_;
}

bool Book :: get_required()
{
	return required_;
}

bool Book :: get_used()
{
	return used_;
}

void newBook(Book& nBook)
{
	int tempCode;
	double tempPrice;
	int tempEnrollment;
	bool tempRequired;
	bool tempUsed;
	cout << "Please enter the book code: ";
	cin >> tempCode;
	cout << "single copy price: ";
	cin >> tempPrice;
	cout << "number on hand: ";
	cin >> tempEnrollment;
	cout << "true/false for required/ optional: ";
	cin >> tempRequired;
	cout << "true/false for new/ used: ";
	cin >> tempUsed;

	if 

	nBook.set(tempCode, tempPrice, tempEnrollment, tempRequired, tempUsed);
}

double totalPrice(vector <Book> list)
{
	double price = 0;
	for (int i = 0; i <= list.size(); i++)
	{
		price += list[i].get_price();
	}
	return price;
}

int main()
{
	vector <Book> listofBooks = {};
	
	// First gather the list of books;
	// then calculate the profit;
	int Bookcounter = 1;
	bool keepGoing = true;

	do
	{
		Book tmp;
		newBook(tmp);
		listofBooks.push_back(tmp);
		cout << "**********************************" << endl;
		cout << "Book Code: " << listofBooks[Bookcounter].get_code() << endl;
		cout << "Book Price: " << listofBooks[Bookcounter].get_price() << endl;
		cout << "Enrollment: " << listofBooks[Bookcounter].get_enrollment() << endl;
		if (listofBooks[Bookcounter].get_required() && listofBooks[Bookcounter].get_used())
		{
			cout << "This book is required and used." << endl;
		}
		else if (listofBooks[Bookcounter].get_required())
		{
			cout << "This book is required and not used." << endl;
		}
		else if (listofBooks[Bookcounter].get_used())
		{
			cout << "This book is not required and used." << endl;
		}
		else
		{
			cout << "This book is not required and not used." << endl;
		}

		cout << "**********************************" << endl;
		cout << "Need to order:" << listofBooks.size() << endl;
		cout << "Total Cost: " << totalPrice(listofBooks);
		cout << "**********************************" << endl;

		cout << "Want to keep going? Enter true, otherwise false: ";
		cin >> keepGoing;
		Bookcounter += 1;
	} while (keepGoing);

	getchar();
	return 0;
}

