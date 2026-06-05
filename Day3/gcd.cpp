#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"enter the numbers"<<endl;
    cin>>n>>m;
     int gcd=0;
    for(int i=1;i<n;i++){
       
        if(n%i==0 && m%i==0){
            gcd=i;
        }
    }
    cout<<"gcd 0f "<<n<<" and "<<m<<" is :"<<gcd;
    return 0;
}