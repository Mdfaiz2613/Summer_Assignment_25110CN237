#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    int a=0;
    int b=1;
    int c;
    if(n==1){
        cout<<a;
    }
    else if(n==2){
        cout<<b;
    }
    else{
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;    
    }
    cout<<"fibonacci nth term is:"<<c;

}
    return 0;
}