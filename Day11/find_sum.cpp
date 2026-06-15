#include<iostream>
using namespace std;

int sum(int a,int b){
    
    return a+b;
}

int main(){
    int n,m;
    cout<<"enter the numbers::"<<endl;
    cin>>n>>m;
    cout<<"sum is :"<<sum(n,m);
}