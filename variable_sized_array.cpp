#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a,b;
      int l;
    cin>>a; 
    cin>>b; 
    vector<vector<int>> vect;
    for (int i=0;i<a;i++){
        int d; 
        cin>>d;
        vector <int> dg;
        for(int j=0;j<d;j++){
          
           cin>>l;
           dg.push_back(l);
           l=0;
        }
        vect.push_back(dg);
    }
    for (int k=0;k<b;k++){
        int m,n;
        cin>>m;
        cin>>n;
        cout<<vect[m][n]<<endl;
    }
    return 0;
}
