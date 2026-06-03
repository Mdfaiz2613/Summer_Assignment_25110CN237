#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int sum = 0;
    while (n > 0) {
        int digit = n % 10; // Get the last digit
        sum += digit; // Add the digit to the sum
        n /= 10; // Remove the last digit
    }
    cout << "Sum of the digits is: " << sum << endl;
    return 0;
}