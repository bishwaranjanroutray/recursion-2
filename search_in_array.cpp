#include<iostream>
using namespace std;

int find(int arr[],int f,int idx,int n){     
    if(idx==n) return -1;
    else if(arr[idx]==f) return idx;
    else find(arr,f,idx+1,n);

}

int main(){
    int arr[]={4,5,7,8,9,45,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<find(arr,9,0,n);
}