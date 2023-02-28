#include <iostream>
using namespace std;
int main(){
    cout<<"this program is to find whether two numbers are friendly pairs or not\n";
    int a,b,c=0,d=0;
    cout<<"enter 1st number: ";
    cin>>a;
    cout<<"enter 2nd number: ";
    cin>>b;
    for(int i =1;i<a;i++){
        if(a%i==0){
            c+=i;
        }
        else{
            continue;
        }}
    for(int j =1;j<b;j++){
        if(b%j==0){
            d+=j;
        }
        else{
            continue;
        }
    }
    if(c==b or d==a){
        cout<<"they are friendly pair\n";
    }
    else{
        cout<<"they are not a friendly pair\n";
    }
    return 0;
}