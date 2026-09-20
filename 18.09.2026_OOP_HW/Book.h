#pragma once
#include <iostream>
using namespace std;

class Book
{
	const int ID;
	string title;
	const string author;
	const int PAGECOUNT;
	const int YEAR;
	double price;
public:
	//CONSTRUCTORS
	Book();
	Book(int id, string title, string author, int pageCount, int year, double price);

	//METHODS
	void showInfo();
	void changePrice(double newPrice); //setPrice קונוח םüמדמ םולא
	void isModernBook();
	void discount(double percent);

	//GETTERS
	int getId();
	string getTitle();
	string getAuthor();
	int getPageCount();
	int getYear();
	double getPrice();
	//SETTERS
	void setId();
	void setTitle();
	void setAuthor();
	void setPageCount();
	void setYear();
};

