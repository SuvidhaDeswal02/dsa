#include <iostream>
using namespace std;

int main()
{
  int a=0;
  int b=1;
  int s;
  int n;
  cout<<"Enter the number you want fibonacci series for:";
  cin>>n;
  cout<<a<<" "<<b<<" ";
  for(int i=2;i<n;i++){
      s=a+b;
      cout<<s<<" ";
      a=b;
      b=s;
  }

    return 0;
}