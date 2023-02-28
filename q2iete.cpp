#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,c=0,d,e,k;
    cin>>a;
    cin>>d;
    vector <int> vect;
    for(int i=0;i<a;i++){
        int b;
        cin>>b;
        vect.push_back(b);
    }
    for (int j=0;j<a;j++){
        for ( k=j;k<a;k++){
        c+=vect[k];
         e=j;
        if (c==d){
            break;
        }
       
         }
        if (c==d) {
            cout<<e+1<<" "<<k+1;
            break;
        }
        else{
            c=0;
        }
    }
    return 0;
}