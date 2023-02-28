#include <iostream>
using namespace std;

//find simple interest using principle/rate/time//

int main(){
    int principle,rate,time;
    cout<<" enter principle";

cin>>principle;
cout<<"enter rate";

cin>>rate;
cout<<"enter time";
cin>>time;
cout<<"your simple interest is "<<principle*rate*time/100<<endl;
cout<<"your amount is "<<principle+(principle*rate*time/100);
return 0;
}