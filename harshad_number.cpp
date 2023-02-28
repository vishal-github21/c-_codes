#include <iostream>
using namespace std;
int main(){
    int a,b,c=0;
    cin >>a;
    b=a;
    for (int i =0;a!=0;i++){
        c+=(a%10);
        a/=10;
    }
    if(b%c==0){
        cout<<"the number is a harshad number";
    }
    else{
        cout<<"the number is not a harshad number";
    }
    return 0;
}