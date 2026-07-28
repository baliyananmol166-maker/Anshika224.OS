#include <iostream>
using namespace std;
int main() {
    string s[5];
    string t[5];
    for(int i=0; i<5; i++){
        cin>>s[i];
    }
    for(int i=0; i<5; i++){
        cin>>t[i];
    }
    for(int i=0; i<5; i++){
        if(s[i]==t[i]){
            cout<<"G";
        }
        else{
            cout<<"B";
        }
    }
    return 0;
}