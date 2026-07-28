#include <iostream>
using namespace std;
int main(){
    int sunny=0, rainy=0;;
    int x;
    for(int i=0; i<7; i++){
        cin>>x;
        if(x==1){
            sunny++;
        }
        else {
            rainy++;
        }
    }
    if(sunny>rainy){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }


}