#include <iostream>
using namespace std;
int main(){
    long long a,b,c,d,e,f,g,h;
    cin>>a;
    cin>>c;
    long long arr[a]={};
    long long arrr[]={};
   
    for(b=0;b<a;b++){
        cin>>arr[b];
    }
    for(d=0;d<a;d++){
        for(e=d;e<a;e++){
            f=+arr[e];
            if(f==c){
                g=d;
                h=e;
                break;
            }
        }
    }
    for(long long i=g;i<=h;i++){
        cout<<arr[i];
    }
    return 0;
}