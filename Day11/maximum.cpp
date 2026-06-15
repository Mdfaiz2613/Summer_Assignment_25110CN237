#include<iostream>
using namespace std;

void max(int a,int b){
    if(a>b){
        cout<<a<<" is maximum";
    }
    else{
        cout<<b<<" is maximum";
    }
    
}

int main(){
    int n,m;
    cout<<"enter the numbers::"<<endl;
    cin>>n>>m;
    max(n,m);
}