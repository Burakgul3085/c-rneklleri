#include <iostream>
using namespace std;

int main() {
   string name, address, pizzaSize, toppings;
   int quantity;
   
   cout << "Welcome to our pizza ordering system!\n\n";
   
   // Get customer information
   cout << "Please enter your name: ";
   getline(cin, name);
   
   cout << "Please enter your address: ";
   getline(cin, address);
   
   // Get pizza information
   cout << "What size of pizza do you want (small, medium, large)? ";
   getline(cin, pizzaSize);
   
   cout << "What toppings do you want? ";
   getline(cin, toppings);
   
   cout << "How many pizzas do you want? ";
   cin >> quantity;
   
   // Display order summary
   cout << "\n\nYour order summary:\n";
   cout << "Name: " << name << endl;
   cout << "Address: " << address << endl;
   cout << "Pizza size: " << pizzaSize << endl;
   cout << "Toppings: " << toppings << endl;
   cout << "Quantity: " << quantity << endl;
   
   return 0;
}
