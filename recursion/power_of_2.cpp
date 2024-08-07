#include <iostream>
using namespace std;
bool pow2(int n){
    if(n==1) return true;
    if(n%2==0) return pow2(n/2);
    else return false;
}
int main()
{
    int n;
    cout<<"Enter a number to check if it is a power of 2:";
    cin>>n;
    cout<<pow2(n);
    return 0;
}