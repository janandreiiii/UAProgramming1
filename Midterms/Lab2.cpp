#include <iostream>
#include <limits>
using namespace std;

int main() {
    int n;
    int sumEven = 0, sumOdd = 0;

    while (true) {
        cout << "Enter the number of integers to process: ";
        cin >> n;

        if (cin.fail() || n <= 0) {
            cout << "Invalid input! Please enter a positive integer.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << "Number " << i << " is even." << endl;
            sumEven += i;
        } else {
            cout << "Number " << i << " is odd." << endl;
            sumOdd += i;
        }
    }

    cout << "\nSum of even numbers: " << sumEven << endl;
    cout << "Sum of odd numbers: " << sumOdd << endl;

    return 0;
}
