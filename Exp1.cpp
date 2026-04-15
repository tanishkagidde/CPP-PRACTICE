#include <iostream> // Provides input and output operations
#include <iomanip>
using namespace std;
// Definition of class HotelBill
class HotelBill
{
private:
// Data members (private for data security)
int tableNo, items; // Stores table number and number of items
string customerName; // Stores customer name
long long contact; // Stores customer contact number
float total, discount, payable; // Stores bill details
public:
// Member function to accept customer details
void getCustomerDetails()
{
// Accept table number
cout << "Enter Table Number: ";
cin >> tableNo;
// Clear input buffer before taking string input
cin.ignore();
// Accept customer name (including spaces)
cout << "Enter Customer Name: ";
getline(cin, customerName);
// Accept customer contact number
cout << "Enter Customer Contact Number: ";
cin >> contact;
}
// Member function to accept order details
void getOrderDetails()
{
int qty; // Quantity of each item
float price; // Price of each item
total = 0; // Initialize total bill amount
// Accept number of ordered items
cout << "\nEnter Number of Items Ordered: ";
cin >> items;
// Loop to accept quantity and price of each item
for (int i = 1; i <= items; i++)
{
cout << "\nItem " << i << " Quantity: ";
cin >> qty;
cout << "Item " << i << " Price: ";
cin >> price;
// Calculate total amount
total += qty * price;
}
}
cout << "Payable Amount : Rs. " << payable << endl;
}
};
int main()
{
// Create an object of HotelBill class
HotelBill bill;
// Call member functions using object
bill.getCustomerDetails(); // Get customer information
bill.getOrderDetails(); // Get order details
bill.calculateBill(); // Calculate bill and discount
bill.displayBill();
// Display final bill
return 0; // End of program
}
