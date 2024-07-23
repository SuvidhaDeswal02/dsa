#include <iostream>
using namespace std;
int f(int n){
    
    if(n==0) return 0;
    
    return (n+f(n-1));
}



int main()
{
    int n;
    cout<<"Enter n numbers for which you want to get sum: ";
    cin>>n;
    f(n);
    cout<<"Sum of first "<<n<<" numbers is: "<<f(n);
    

    return 0;
}