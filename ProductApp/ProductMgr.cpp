#include "ProductMgr.h"

ProductMgr::ProductMgr()
{
}

ProductMgr::~ProductMgr()
{
}

void ProductMgr::insertProd(Product p, vector<Product> &products)
{
	products.push_back(p);
}

void ProductMgr::updateProd(int prodId, vector<Product> &products)
{
	Product temp;
	vector<Product>::iterator itr;
	
	string title;
	string desc;
	double price;
	int likes;
	
	for(itr = products.begin() ; itr != products.end() ; itr++)
	{
		if(itr->getProdId() == prodId)
		{
			cout << "\n\t\t\tProduct Details : ";
			itr->showProdInfo();
			
			cout << endl << endl;
			break;
		}
	}
	
	cout << "\t\t\tEnter New Details : " << endl << endl;
	
	cout << "\t\t\tEnter Product Title : ";
	cin.ignore();
	getline(cin, title);
	cout << "\t\t\tEnter Product Description : ";
	getline(cin, desc);
	cout << "\t\t\tEnter Product Price : ";
	cin >> price;
	cout << "\t\t\tEnter Product Like counts : ";
	cin >> likes;
	
	itr->setTitle(title);
	itr->setDesc(desc);
	itr->setPrice(price);
	itr->setLikes(likes);
	
	getch();
}

void ProductMgr::deleteProd(int prodId, vector<Product> &products)
{
	vector<Product>::iterator itr;
	
	for(itr = products.begin() ; itr != products.end() ; itr++)
	{
		if(itr->getProdId() == prodId)
		{
			products.erase(itr);
			break;
		}
	}
	cout << "\n\n\t\t\tProduct deleted successfully" << endl;
	
	getch();
}

Product ProductMgr::getProdById(int prodId, vector<Product> &products)
{
	Product temp;
	vector<Product>::iterator itr;
	
	for(itr = products.begin() ; itr != products.end() ; itr++)
	{
		if(itr->getProdId() == prodId)
		{
			temp.setTitle(itr->getTitle());
			temp.setDesc(itr->getDesc());
			temp.setPrice(itr->getPrice());
			temp.setLikes(itr->getLikes());
			
		}
	}
	
	return temp;
}
