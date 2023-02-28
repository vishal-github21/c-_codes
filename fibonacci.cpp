#include <iostream>
#include <vector>
using namespace std;
int main (){
    int n;
    cin>>n;
    vector<int> fibonacci={0,1};
    for (int i=0;i<n-2;i++){
        fibonacci.push_back(fibonacci[i]+fibonacci[i+1]);
    }
    for(int j=0;j<n;j++){
        cout<<fibonacci[j];
    }
    return 0;
}