#include <iostream>
using namespace std;
#include "Book.h"

int main()
{
	Book b1;
	b1.showInfo();
	b1.changePrice(-1);
	b1.changePrice(9999);
	b1.showInfo();

	Book b2(1,"Title 1","Author 1", 100, 2001, 5000);
	b2.showInfo();
	b2.isModernBook();

	Book b3(2,"Second Title","Second Author",500,2021,2500);
	b3.showInfo();
	b3.discount(-1);
	b3.discount(10);
	b3.showInfo();
	b3.isModernBook();
	b3.setTitle("ANOTHER Title");
	b3.showInfo();

	cout << b3.getId() << endl
		<< b3.getTitle() << endl
		<< b3.getAuthor() << endl
		<< b3.getPageCount() << endl
		<< b3.getYear() << endl
		<< b3.getPrice() << endl << endl;
	return 0;
}