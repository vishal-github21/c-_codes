#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c=0,d=0,e;
    cin>>a;
    b=a;
    e=a;
    while(a!=0){
        a/=10;
        c++;
    }
    while(b!=0){
        d=d+pow((b%10),c);
        b/=10;
    }
    if (d==e){
    cout<<"number is armstrong number\n";}
    else {
    cout<<"number is not an armstrong number\n";}
    return 0;
}