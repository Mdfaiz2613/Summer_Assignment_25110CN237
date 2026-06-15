#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int i = n;

    while(i >= 1) {

        int space = n - i;
        while(space > 0) {
            cout << " ";
            space--;
        }

        int j = 1;
        while(j <= (2 * i - 1)) {
            cout << "*";
            j++;
        }

        cout << endl;
        i--;
    }

    return 0;
}