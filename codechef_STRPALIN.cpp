#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for (int i=0;i<a;i++){
    int h=0;
        string b,d;
        cin>>b;
        cin>>d;
        string c,e;
        for (int j=0;j<b.length();j++){
           c=to_string(b[j]);
        for (int l=j+1;l<b.length();l++){
            
            c+=to_string(b[l]);
            for(int k=0;k<d.length();k++){
               e=to_string(d[k]);
            for(int m=k+1;m<d.length();m++){

                e+=to_string(d[m]);
                     if(c==e){
                        cout<<"yes\n";
                        h=9;
                        break;
                     }

            }
            if(c==e){
                break;
            }
            }
             if(c==e){
                break;
            }
        }
         if(c==e){
                break;
            }
            }

            if(h==0){
                cout<<"no\n";
            }
            h=0;
    }
    return 0;
}