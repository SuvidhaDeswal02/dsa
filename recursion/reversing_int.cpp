#include <iostream>
#include <climits>
using namespace std;
int rev(int n, int r=0){
    if((r>INT_MAX/10)|| (r<INT_MIN/10)) return 0;
    if(n==0) return r;
    
    return rev(n/10,r*10+(n%10));
}

int main()
{
    int num;
    cout<<"Enter the integer to be reversed:";
    cin>>num;
    cout<<rev(num);
    return 0;
}
  
    