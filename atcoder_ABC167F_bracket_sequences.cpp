#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    int d;
    cin>>a;
    string s;
    cin>>s;
    vector <char> vect;
    for (int k=0;k<a;k++){
        vect.push_back(s[k]);
    }
    vector<int> vect2;
    for(int i=1;i<a;i++){
       for(int j=a;j>i;j--){
        b=count(vect.begin(),vect.begin()+i,'(')+count(vect.begin()+j-1,vect.end(),'(');
        c=count(vect.begin(),vect.begin()+i,')')+count(vect.begin()+j-1,vect.end(),')');
        if (b==c){
            vect2.push_back(i+a-j+1);
        }
       }
    }
    sort(vect2.begin(),vect2.end());
    d=vect2.size();
    cout<<vect2[d-1];

    return 0;
}