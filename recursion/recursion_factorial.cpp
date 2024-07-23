#include <iostream>
using namespace std;
int f(int n){
    
    if(n==0) return 1;
    
    return (n*f(n-1));
}



int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    f(n);
    cout<<"Fatorial for "<<n<<" is: "<<f(n);
    

    return 0;
}