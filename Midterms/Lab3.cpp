#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    int choice;
    string again = "yes";

    cout << "Shape Area and Perimeter Calculator\n";

    while (again == "yes" || again == "Yes" || again == "y" || again == "Y") {
        cout << "\nSelect a shape to calculate:\n";
        cout << "1. Rectangle\n";
        cout << "2. Square\n";
        cout << "3. Triangle\n";
        cout << "4. Circle\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 1) {
            double length, width;
            cout << "\nEnter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;

            if (cin.fail() || length <= 0 || width <= 0) {
                cout << "Invalid input! Length and width must be positive numbers.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            double area = length * width;
            double perimeter = 2 * (length + width);

            cout << "Area of the Rectangle: " << area << endl;
            cout << "Perimeter of the Rectangle: " << perimeter << endl;
        }
        else if (choice == 2) {
            double side;
            cout << "\nEnter the side length of the square: ";
            cin >> side;

            if (cin.fail() || side <= 0) {
                cout << "Invalid input! Side length must be a positive number.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            double area = side * side;
            double perimeter = 4 * side;

            cout << "Area of the Square: " << area << endl;
            cout << "Perimeter of the Square: " << perimeter << endl;
        }
        else if (choice == 3) {
            double base, height, s1, s2, s3;
            cout << "\nEnter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            cout << "Enter the first side of the triangle: ";
            cin >> s1;
            cout << "Enter the second side of the triangle: ";
            cin >> s2;
            cout << "Enter the third side of the triangle: ";
            cin >> s3;

            if (cin.fail() || base <= 0 || height <= 0 || s1 <= 0 || s2 <= 0 || s3 <= 0) {
                cout << "Invalid input! All dimensions must be positive numbers.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            double area = 0.5 * base * height;
            double perimeter = s1 + s2 + s3;

            cout << "Area of the Triangle: " << area << endl;
            cout << "Perimeter of the Triangle: " << perimeter << endl;
        }
        else if (choice == 4) {
            double radius;
            cout << "\nEnter the radius of the circle: ";
            cin >> radius;

            if (cin.fail() || radius <= 0) {
                cout << "Invalid input! Radius must be a positive number.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            double area = M_PI * pow(radius, 2);
            double circumference = 2 * M_PI * radius;

            cout << fixed << setprecision(3);
            cout << "Area of the Circle: " << area << endl;
            cout << "Circumference of the Circle: " << circumference << endl;
        }
        else if (choice == 5) {
            cout << "Exiting the program...\n";
            break;
        }
        else {
            cout << "Invalid choice. Please enter a number from 1 to 5.\n";
            cout << "Do you want to try again? (yes/no): ";
            cin >> again;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue; // Continue to the next iteration of the loop
        }

        cout << "\nDo you want to calculate another shape? (yes/no): ";
        cin >> again;
    }

    return 0;
}
