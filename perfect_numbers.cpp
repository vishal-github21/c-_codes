#include <iostream>
using namespace std;
int main(){
    cout<<"this program is to find whether a number is strong or not\n";
    int a,c=0;
    cout<<"enter your number: ";
    cin>>a;
    for(int i =1;i<a;i++){
        if(a%i==0){
            c+=i;
        }
        else{
            continue;
        }
    }
    if(c==a){
        cout<<"it is a strong number\n";
    }
    else{
        cout<<"it is not a strong number\n";
    }
    return 0;
}