#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number::"<<endl;
    cin>>n;
    int count=0;
    while(n!=0){
        int bit = n&1;
        if(bit==1){
            count++;
        }
        n=n>>1;
    }
    cout<<count;
}