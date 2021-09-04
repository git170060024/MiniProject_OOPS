#ifndef __SHOPPINGCART_H_
#define __SHOPPINGCART_H_
#include<string>
using std::string;

class Item
{
	string name, unit;
	int quantity, price;

public:
	Item();
	Item(string, string, int, int);
	string getName();
	string getUnit();
	int getQuantity();
	int getPrice();
	int extendedPrice();
};

class List
{
private:
	Item *itemlist;
	int listSize;

public:
	List();
	~List();
	void addItem(Item);
	void removeItem();
	void print();
	friend bool operator==(Item, Item);
};
int menu();
int getUnsignedInt();
bool isUnsignedInt(string);
string getString();
bool isString(string);

#endif