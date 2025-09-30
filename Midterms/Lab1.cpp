#include <iostream>
#include <limits>
using namespace std;

int main() {
    int choice, quantity;
    int price = 0;
    string itemName;
    int totalBill = 0;

    cout << "Menu:\n";
    cout << "1. Burger - 100 PHP\n";
    cout << "2. Pizza - 250 PHP\n";
    cout << "3. Pasta - 150 PHP\n";
    cout << "4. Salad - 120 PHP\n";
    cout << "5. Drink - 50 PHP\n";
    cout << "Enter '0' to exit.\n";

    while (true) {
        cout << "\nEnter the number of the item you want to order: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting the program. Thank you!\n";
            return 0;
        }

        if (choice >= 1 && choice <= 5) {
            break;
        } else {
            cout << "Invalid choice! Please select a number between 1 and 5, or '0' to exit.\n";
        }
    }

    while (true) {
        cout << "Enter the quantity: ";
        cin >> quantity;

        if (cin.fail() || quantity <= 0) {
            cout << "Invalid quantity! Please enter a positive number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    switch (choice) {
        case 1:
            itemName = "Burger";
            price = 100;
            break;
        case 2:
            itemName = "Pizza";
            price = 250;
            break;
        case 3:
            itemName = "Pasta";
            price = 150;
            break;
        case 4:
            itemName = "Salad";
            price = 120;
            break;
        case 5:
            itemName = "Drink";
            price = 50;
            break;
    }

    totalBill = price * quantity;

    cout << "\nYou ordered " << quantity << " " << itemName;
    if (quantity > 1) cout << "s";
    cout << ".\n";
    cout << "Total Bill: PHP " << totalBill << endl;

    return 0;
}
