#include<iostream>
using namespace std;

int sum(int arr[],int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=arr[i];
    }
    return sum;
}

int avg(int arr[],int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=arr[i];
        
    }
    return (float)sum / n;;
}

int main(){
    int arr[1000];
    int n;
    cout<<"enter the size of array :"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"sum of array is :"<<sum(arr,n)<<endl;
    cout<<"avg of array is :"<<avg(arr,n);
    return 0;
}