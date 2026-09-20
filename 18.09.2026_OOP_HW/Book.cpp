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
}

void Book::changePrice(double newPrice)
{
}

void Book::isModernBook()
{
}

void Book::discount(double percent)
{
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