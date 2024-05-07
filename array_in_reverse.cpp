#include<iostream>
using namespace std;

void display(int arr[],int idx){
    if(idx==-1) return;
    cout<<arr[idx]<<" ";
    display(arr,idx-1);
}

int main(){
    int arr[]={4,5,7,8,9,45,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n-1);
}