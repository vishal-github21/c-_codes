#include <iostream>
using namespace std;
int main(){
    long long a,b,c,d,e;
    cin>>a;
    long long arr[a]={};
    int arrr[]={};

    for(b=0;b<a;b++){
        cin>>arr[b];
    }
    for(c=0;c<a;c++){
        for(d=c+1;d<a;d++){
            for(e=0;e<a;e++)
            if(arr[c]==arr[d]){
               
               arrr[e]=c;
               break;
              
            }
          
        }
    }
    cout<<arrr[0];
    return 0;
}