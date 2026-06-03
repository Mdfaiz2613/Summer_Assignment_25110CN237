#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"enter the value number:"<<endl;
    cin>>n;
    int product=1;
    int rem=0;
    while(n>0){
        rem=n%10;
        product=product*rem;
        n=n/10;

    }
    cout<<"the product is:"<<product;
    return 0;
}