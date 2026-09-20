#include "Book.h"

Book::Book() :ID(0), AUTHOR(" "), PAGECOUNT(0), YEAR(0)
{
	title = " ";
	price = 0;
}

Book::Book(int id, string title, string author, int pageCount, int year, double price) :ID(id), AUTHOR(author), PAGECOUNT(pageCount), YEAR(year)
{
	this->title = title;
	this->price = price;
}

void Book::showInfo()
{
	cout << "Id: " << ID << "\nTitle: " << title << "\nAuthor: " << AUTHOR << "\nPage count: " << PAGECOUNT
		<< "\nYear of release: " << YEAR << "\nPrice: " << price << endl << endl;
}

void Book::changePrice(double newPrice)
{
	if (newPrice > 0) {
		price = newPrice;
	}
	else {
		cout << "!!! Invalid new price\n\n";
	}
}

void Book::isModernBook()
{
	if (YEAR >= 2015) {
		cout << "This book is modern\n\n";
	}
	else {
		cout << "This book is not modern\n\n";
	}
}

void Book::discount(double percent)
{
	if (percent > 0) {
		price = price - (price * percent / 100);
	}
	else {
		cout << "!!! Invalid percentage\n\n";
	}
}

int Book::getId()
{
	return ID;
}

string Book::getTitle()
{
	return title;
}

string Book::getAuthor()
{
	return AUTHOR;
}

int Book::getPageCount()
{
	return PAGECOUNT;
}

int Book::getYear()
{
	return YEAR;
}

double Book::getPrice()
{
	return price;
}

void Book::setTitle(string title)
{
	this->title = title;
}