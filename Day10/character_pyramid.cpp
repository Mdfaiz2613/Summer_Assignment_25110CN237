#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int i = 1;

    while (i <= n) {

        int space = n - i;
        while (space) {
            cout << " ";
            space--;
        }

        
        int j = 1;
        while (j <= i) {
            char ch = 'A' + j - 1;
            cout << ch;
            j++;
        }

       
        int k = i - 1;
        while (k >= 1) {
            char ch = 'A' + k - 1;
            cout << ch;
            k--;
        }

        cout << endl;
        i++;
    }

    return 0;
}