#include <iostream>
using namespace std;
int f(int n, int s){
    
    if(n<1) return s;
    
    return f(n-1,(s+n));
}



int main()
{
    int n;
    cout<<"Enter n numbers for which you want to get sum: ";
    cin>>n;
    f(n,0);
    cout<<"Sum of first "<<n<<" numbers is: "<<f(n,0);
    

    return 0;
}