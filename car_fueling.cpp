#include <iostream>
#include <vector>
using namespace std;

int main(){
    int d , m ,a,b;
    d = 10;
    m  = 3;
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    int lastStop = 0;
    while (lastStop<=d){
    for(int i = 0 ; i< m ; ++i){
        if(v[i] - lastStop > m ){
            a=i-1;
            if(a<0){
                cout<<"not possible";
                break;
            }
            b=b++;

            lastStop = v[a];
        }
        else if ((v[i]-lastStop) <=m){
            v.erase(v.begin());
        }
       
    }
    }

    
cout<<b;
return 0;
}