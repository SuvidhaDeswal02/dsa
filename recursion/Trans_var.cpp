#include <iostream>
using namespace std;
int func(int m, int n){
    if(m==n) return 1;
    if(n>m){
        if((m&1)==1) return func(m+1,n);
        else return func(m+2,n);
    }
    else return 0;
}

int main(){
    int a,b,c;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    c=func(5,4);
    cout<<c;
   
}