#include<iostream>
using namespace std;

int fac(int n){
    if(n==0||n==1){
        return 1;
    }
    int fac=1;
    for(int i=1;i<=n;i++){
        fac=fac*i;
    }
    return fac;
}

int main(){
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
   int m=n;
   int sum=0;
   while(m!=0){
    int digit=m%10;
    sum+=fac(digit);
    m=m/10;
   }
   if(sum==n){
    cout<<"the given number is strong number::";
   }
   else{
    cout<<"the given number is not strong number::";
   }
   return 0;

}