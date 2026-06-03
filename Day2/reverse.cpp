#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of number:";
    cin>>n;
    int rev=0;
    int rem;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    cout<<"reverse of number is"<<rev;
    return 0;
}