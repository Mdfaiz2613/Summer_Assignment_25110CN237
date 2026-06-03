#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int m=n;
    int rev=0;
    int rem;
    while(m>0){
        rem=m%10;
        rev=rev*10+rem;
        m=m/10;
    }
    if(rev==n){
        cout<<"the given is palindrome:"<<endl;
    }
    else{
        cout<<"the given is not palindrome:"<<endl;
    }
    return 0;
    
}