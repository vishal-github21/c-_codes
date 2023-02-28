#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int c=0,d;
    for (int i=0;i<str.length();i++){
        if (str[i]=='0' or str[i]=='1' or str[i]=='2' or str[i]=='3' or str[i]=='4' or str[i]=='5' or str[i]=='6' or str[i]=='7' or str[i]=='8' or str[i]=='9'){
           
            d=(str[i]-'0');
            c+=d;
           
        }
        else{
            continue;
        }
    }

    cout<<c;
    return 0;
}