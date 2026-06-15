#include<iostream>
using namespace std;

int oddcount(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] & 1){
            count++;
        }
    }
    return count;
}

int evencount(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[1000];
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Even elements = " << evencount(arr, n) << endl;
    cout << "Odd elements = " << oddcount(arr, n) << endl;

    return 0;
}