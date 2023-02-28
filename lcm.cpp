#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int c=1;
    int d=min(a,b);
   while (true)
   {
    if (c%a==0 and c%b==0){
        cout<<"lcm is "<<c<<endl;
        break;
    }
    c++;
   }
   while(true){
    if(a%d==0 and b%d==0){
        cout<<"hcf is "<<d;
        break;
      
    }
      d--;

   }
   
    return 0;
}