

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int m = n;
    int count = 0;

    
    while (m != 0) {
        count++;
        m = m / 10;
    }

    m = n;
    int sum = 0;

    while (m != 0) {
        int rem = m % 10;
        sum = sum + pow(rem, count);
        m = m / 10;
    }

    if (sum == n) {
        cout << "Number is Armstrong";
    } else {
        cout << "Number is not Armstrong";
    }

    return 0;
}