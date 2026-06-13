#include<iostream>
using namespace std;

int main(){
    int number,power;
    cout<<"enter the base and power::"<<endl;
    cin>>number>>power;
    int product=1;
    for(int i=1;i<=power;i++){
        product=product*number;   
    }
    cout<<product;

}