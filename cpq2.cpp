// Given a string S consisting of lowercase English letters, you need to find the 
// first non-repeating character in it and return its index. If it doesn't exist, return -1.

#include <iostream>
using namespace std;
int main(){
    string a;

    cin>>a;
    for (int i=0;i<a.length();i++){
        int c;
        c=-1;
        for(int k=1;k<(a.length()-1);k++){
            if (a[i]==a[k]){
                c=0;
            }
        }
        if(c==0){

            continue;
        }
        else if(c==-1){
            cout<<i;
            break;
        }
    }
    return 0;
}