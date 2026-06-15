#include<iostream>
#include <climits>
using namespace std;

int getmax(int arr[],int n){
    int max=INT_MIN;
    for(int i=1;i<=n;i++){
        if(max<=arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int getmin(int arr[],int n){
    int min=INT_MAX;
    for(int i=1;i<=n;i++){
        if(min>=arr[i]){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int arr[1000];
    int n;
    cout<<"enter the size of array :"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"maximum element in the array is : "<<getmax(arr,n)<<endl;
    cout<<"minimum element in the array is : "<<getmin(arr,n)<<endl;
    return 0;
}