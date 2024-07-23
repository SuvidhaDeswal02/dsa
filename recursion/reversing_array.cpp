#include <iostream>
using namespace std;
void swap_ar(int arr[], int start, int end)
{
    if(end<=start) return;
    
    else{
        int t;
        t=arr[end];
        arr[end]=arr[start];
        arr[start]=t;
    }
    
    swap_ar(arr,start+1,end-1);
}

int main(){
    int arr[]={4,5,7,9,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    swap_ar(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}