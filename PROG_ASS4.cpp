// Maria needs to know how much money to have with her when she goes to her favorite shoe store.
//How much money should Maria bring to buy a pair of shoes; if the original price is $80.00 
//and there is a discount of 20%. This sale will last one week.
#include <iostream>
using namespace std;

int main()
{
	float originalPrice, discount, total_discount, total_price;
	
	
	cout << "Enter the original price: $";
	cin >> originalPrice;
	cout << "Enter the Discount: ";
	cin >> discount;
	
    total_discount = originalPrice * discount ;
	
	cout << "The Total Discount is: $" << total_discount << endl << endl;
	
	cout << "Enter the Original price: $";
	cin >> originalPrice;
	cout << "Enter Total Discount: $";
	cin >> total_discount;
	
	total_price = originalPrice - total_discount;

	cout << "The total price is: $" << total_price;
	
	return 0;
	

}
