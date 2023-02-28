// You are given an array of integers and an integer K. Find the number of pairs (i, j) such
//  that i < j and a[i] + a[j] = K.

#include <iostream>
#include <vector>

using namespace std;
int main(){
    int a,n=0,K;
    cin>>a;
    cin>>K;
    vector<int> c;
    for(int i=0;i<a;i++){
        int b;
        cin>>b;
        c.push_back(b);
    }
        for(int l=0;l<a;l++){
    for(int j=0;j<a;j++){
            if(l < j and c[l] + c[j] == K){
                n++;
            }
        }
    }
    cout<<n;
    return 0;
}
