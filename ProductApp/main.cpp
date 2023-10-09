#include "Product.h"
#include "ProductMgr.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int choice = 0, i = 0;
	
	int prodId = 0, likes = 0;
	string title;
	string desc;
	double price = 0.0;
	
	vector<Product> products;
	Product pTemp;
	
	// iterator to traverse the product list
	vector<Product>::iterator itr;
	
	do
	{
		system("cls");
		
		
		cout << "\n\t\t\tProduct Management System" << endl;
		
		cout << "\n";
		
		cout << "\n\t\t\t[1] Add a Product.";
		cout << "\n\t\t\t[2] Update a Product.";
		cout << "\n\t\t\t[3] Delete a Product.";
		cout << "\n\t\t\t[4] Show all Products.";
		cout << "\n\t\t\t[5] Exit.";
		
		cout << "\n\n\t\t\tEnter Choice : ";
		cin >> choice;
	
	
		switch(choice)
		{
			case 1:{
				system("cls");
				
				cout << "\n\t\t\tAdd Product Section" << endl << endl;
				
				cout << "\t\t\tEnter Product ID : ";
				cin >> prodId;
				cout << "\t\t\tEnter Product Title : ";
				cin.ignore();
				getline(cin, title);
				cout << "\t\t\tEnter Product Description : ";
				getline(cin, desc);
				cout << "\t\t\tEnter Product Price : ";
				cin >> price;
				cout << "\t\t\tEnter Product Like counts : ";
				cin >> likes;
				
				pTemp = Product(prodId, title, desc, price, likes);
				
				ProductMgr::insertProd(pTemp, products);
				
				//cout << "\n\t\t\tProduct[" << prodId << "] added successfully";
				
				
				break;
			}
			case 2:{
				system("cls");
				
				cout << "\n\t\t\tEnter Product-ID :";
				cin >> prodId;
				
				ProductMgr::updateProd(prodId, products);
				
				break;
			}
			case 3:{
				system("cls");
				
				cout << "\n\t\t\tEnter Product-ID :";
				cin >> prodId;
				
				ProductMgr::deleteProd(prodId, products);
				
				break;
			}
			case 4:{
				system("cls");
				
				cout << "\n\t\t\tProduct\'s List" << endl << endl;
				
				for(itr = products.begin(), i = 1 ; itr != products.end() ; itr++, i++)
				{
					cout << "\n\t\tProduct[" << i << "]" << endl;
					
					itr->showProdInfo();
					cout << endl;
				}
				cout << endl;
				
				getch();
				
				break;
			}
		}
	}while(choice != 5);
	
	return 0;
}
