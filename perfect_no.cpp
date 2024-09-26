
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int count=0;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=1;j<i;j++){
            if(i%j==0){
                sum=sum+j;
            }
        }
        if(sum==i) count++;
    }
    cout<<count;
    return 0;
    
}