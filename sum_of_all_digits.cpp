#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main(){
    long long a,c;
    cin>>a;
    vector <long long> b;
    for (long long i=0;a!=0;i++){
       b.push_back(a%10);
        a=a/10;
    }
    cout<< accumulate(b.begin(), b.end(), 0);
    return 0;
}

