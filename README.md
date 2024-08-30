# Reversing an integer:
<img src="https://user-images.githubusercontent.com/74038190/212284100-561aa473-3905-4a80-b561-0d28506553ee.gif" width="1000">

```cpp
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
```

```cpp
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
```
## Difference between code1 and code2-
Both the codes differ only by the position of condition statement given to check if the reversed integer in under the range of integer. Code 1 is a more ideal code and that can be justified by considering two cases:
1)for an integer whose value exceeds the range before n=0.(both the codes result equally for such a number)
2)for an integer whose value exceeds the range at n=0.(for such an integer code 2 will return the reversed integer which is not required)


#power of a number:
## Below given code can be used to check if the given number is the power of some number(let a).
```cpp
#include <iostream>
using namespace std;
bool pow(int n){
    if(n==1) return true;
    if(n%a==0) return pow(n/a);
    else return false;
}
int main()
{
    int n;
    cout<<"Enter a number to check if it is a power of 2:";
    cin>>n;
    cout<<pow(n);
    return 0;
}
```
