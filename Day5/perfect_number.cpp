#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number::"<<endl;
    cin>>n;
    int sum=0;
    int m=n;
    for(int i=1;i<m;i++){
        if(m%i==0){
            sum=sum+i;

        }
    }
    if(sum==n){
        cout<<"number is perfect ::"<<endl;
    }
    else{
        cout<<"number is not perfect ::"<<endl;
    }
    return 0;
}