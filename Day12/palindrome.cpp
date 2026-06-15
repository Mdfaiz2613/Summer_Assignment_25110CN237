#include <iostream>
using namespace std;

void palindrome(int n){
    int m=n;
    int ans=0;
    while(m!=0){
        int digit=m%10;
        ans=ans*10+digit;
        m=m/10;
    }
    if(ans==n){
        cout<<"the given number is palindrome::"<<endl;
    }
    else{
        cout<<"the given number is not palindrome::"<<endl;
    }

}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    palindrome(n);

}