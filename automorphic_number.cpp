#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    b=a*a;
    cout<<b<<b%10;
    if(a==b%10){
        cout<<"the number is a automorphic number";
    }
    else{
        cout<<"the number is not a automorphic number";
    }
    return 0;
}