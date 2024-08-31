//An amount of 1330 is given and it is to be figured that how many 100,50,20 and 1 rupee notes are used to give this amount.
#include <iostream>
using namespace std;
int main(){
    int amt=1330;
    int n=100;
    switch(n){
        case 100:cout<<"No. of 100 rupee notes:"<<(amt/100)<<endl;
                amt=amt-(amt/100)*100;
        case 50: cout<<"No. of 50 rupee notes:"<<(amt/50)<<endl;
                amt=amt-(amt/50)*50;
        case 20: cout<<"No. of 20 rupee notes:"<<(amt/20)<<endl;
                amt=amt-(amt/20)*20;
        case 1: cout<<"No. of 1 rupee notes:"<<(amt/1)<<endl;
                amt=amt-(amt/1)*1;
    }
    return 0;
}
