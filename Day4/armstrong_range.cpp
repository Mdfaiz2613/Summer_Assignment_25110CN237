#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for(int i=1;i<=n;i++){

    
    int m = i;
    int count = 0;

    
        while (m != 0) {
        count++;
        m = m / 10;
        }

        m = i;
        int sum = 0;

        while (m != 0) {
        int rem = m % 10;
        sum = sum + pow(rem, count);
        m = m / 10;
        }

        if (sum == i) {
        cout <<i<<" ";
        } 
    }
    return 0;
}