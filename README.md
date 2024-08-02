# reversing an integer:
Code 1:
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
Code 2:
#include <iostream>
#include <climits>
using namespace std;
int rev(int n, int r=0){
    if(n==0) return r;
    if((r>INT_MAX/10)|| (r<INT_MIN/10)) return 0;
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
## Difference between code1 and code2-
Both the codes differ only by the position of condition statement given to check if the reversed integer in under the range of integer. Code 1 is a more ideal code and that can be justified by considering two cases:
1)for an integer whose value exceeds the range before n=0.(both the codes result equally for such a number)
2)for an integer whose value exceeds the range at n=0.(for such an integer code 2 will return the reversed integer which is not required)
