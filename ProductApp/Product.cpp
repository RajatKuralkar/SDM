#include "Product.h"

Product::Product()
{
}

Product::Product(int prodId, string title, string desc, double price, int likes)
{
	this->prodId = prodId;
	this->title = title;
	this->desc = desc;
	this->price = price;
	this->likes = likes;
}

Product::~Product()
{
}


// getters
int Product::getProdId()
{
	return this->prodId;
}
string Product::getTitle()
{
	return this->title;
}
string Product::getDesc()
{
	return this->desc;
}
double Product::getPrice()
{
	return this->price;
}
int Product::getLikes()
{
	return this->likes;
}
		
// setters
bool Product::setTitle(string title)
{
	this->title = title;
}
bool Product::setDesc(string desc)
{
	this->desc = desc;
}
bool Product::setPrice(double price)
{
	this->price = price;
}
bool Product::setLikes(int likes)
{
	this->likes = likes;
}
