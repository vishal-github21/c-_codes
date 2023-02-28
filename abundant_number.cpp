#include <iostream>
using namespace std;
int main(){
    int a,b=0;
    cin>>a;
    for (int i=1;i<a;i++){
        if (a%i==0){
            b+=i;
        }
        else{
            continue;
        }
    }
    if(b>a){
        cout<<"the number is a abundant number";
    }
    else{
        cout<<"the number is not a abundant number";
    }
    return 0;
}