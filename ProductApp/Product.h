#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

using namespace std;

class Product
{
	private:
		int prodId;
		string title;
		string desc;
		double price;
		int likes;
	public:
		Product();
		Product(int prodId, string title, string desc, double price, int likes);
		~Product();
		
		// getters
		int getProdId();
		string getTitle();
		string getDesc();
		double getPrice();
		int getLikes();
		
		// setters
		bool setTitle(string);
		bool setDesc(string);
		bool setPrice(double);
		bool setLikes(int);
		
		// display method
		void showProdInfo()
		{
			cout << "\n\t\t\tProduct-ID : " << prodId;
			cout << "\n\t\t\tTitle : " << title;
			cout << "\n\t\t\tDescription : " << desc;
			cout << "\n\t\t\tPrice : " << price;
			cout << "\n\t\t\tLikes : " << likes;
		}
};

#endif
