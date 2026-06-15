#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[1000];
    int n;
    cout<<"enter the size of array :"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    print(arr,n);
    return 0;
}