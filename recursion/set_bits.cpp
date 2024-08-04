#include <iostream>
using namespace std;

int set_bits(int n,int count=0){
    if(n==0) return count;
    int bit=n&1;
    if(bit==1) count++;
    return set_bits(n>>1,count);
}
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<"Set bits in the given number="<<" "<<set_bits(n);
    
    return 0;
}