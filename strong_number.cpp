#include <iostream>
using namespace std;
int main(){
    int a,b,d=0,c,e;
    cin>>a;
    e=a;
    for(int i=0;a!=0;i++){
        b=a%10;
        a/=10;
        c=b;
        for(int j=1;j<b;j++){
            c*=j;
        }
        d+=c;
    }
    if (e==d){
        cout<<"number is stong number\n";
    }
    else{
        cout<<"number is not a strong number\n";
    }
    return 0;
}