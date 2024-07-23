#include <iostream>
using namespace std;
int f(int n, int m){
    
    if(n<1) return m;
    
    return f((n-1),(m*n));
}



int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    f(n,1);
    cout<<"Fatorial for "<<n<<" is: "<<f(n,1);
    

    return 0;
}