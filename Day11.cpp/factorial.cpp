#include<iostream>
using namespace std;

int factorial(int a){
    int fac=1;
    if(a==0||a==1){
        return 1;
    }
    else{
        for(int i=1;i<=a;i++){
            fac=fac*i;
        }
        return fac;
    }
}

int main(){
    int n;
    cout<<"enter the number::"<<endl;
    cin>>n;
cout<<"factorial of "<<n<<" is "<<factorial(n);
}