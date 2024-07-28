#include <iostream>
using namespace std;
void swap_ar(int arr[], int r, int n){
    if(r>=n/2) return;
    else{
        int t;
        t=arr[n-r-1];
        arr[n-r-1]=arr[r];
        arr[r]=t;
    }
    swap_ar(arr,r+1,n);
}

int main(){
    int arr[]={3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    swap_ar(arr,0,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}