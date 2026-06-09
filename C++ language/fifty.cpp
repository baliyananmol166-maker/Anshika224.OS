//another example of enum
#include<iostream>
using namespace std;
enum Supercars{Venom=301, Veryon=268, Valkyrie=240, Roadstar=250};
int main() {
    Supercars speed1;
    Supercars speed2;
    speed1=Valkyrie;
    speed2=Roadstar;
    if(speed1<speed2){
        cout<<"It is win for Roadstar with the speed of " <<speed2<<endl;
    }
    else{
        cout<<"It is win for Valkyrie with the speed of "<<speed1<<endl;
    }
    return 0;
}