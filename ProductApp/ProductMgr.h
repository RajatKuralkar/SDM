#ifndef PRODUCTMGR_H
#define PRODUCTMGR_H

#include "Product.h"

class ProductMgr
{
	public:
		ProductMgr();
		~ProductMgr();
		
		// static methods
		static void insertProd(Product, vector<Product>&);
		static void updateProd(int, vector<Product>&);
		static void deleteProd(int, vector<Product>&);
		static Product getProdById(int, vector<Product>&);
};

#endif
