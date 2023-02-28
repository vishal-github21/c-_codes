#include <iostream>
#include <cstdlib>
using namespace std;
typedef long long ll;

int match( ll a , ll arr[]){
    long long b,c,d,e;
    int arrr[]={};


    for(c=0;c<a;c++){
        for(d=c+1;d<a;d++){
            for(e=0;e<a;e++)
            if(arr[c]==arr[d]){
               
               arrr[e]=c;
               break;
              
            }
          
        }
    }return arr[0];
}
int main(){
    while(true){
        int a = rand()%1000 + 1;
        int arr[a];
        for(int b = 0 ; b < a ; ++b){
            arr[b] = rand()%100000;
        }
        cout<< c;
    }
    return 0;
}