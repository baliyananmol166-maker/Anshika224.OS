#include <iostream>
using namespace std;
int main() {
    int n,x,y,a,b;
    cin >> n >> x >> y >> a >> b;
    int petrol_cost = (n/a) * x;
    int diesel_cost = (n/b) * y;
    if(petrol_cost<diesel_cost){
        cout<<"Petrol";
    }
    else if(petrol_cost>diesel_cost){
        cout<<"Diesel";
    }
    else{
        cout<<"Any";
    }
    return 0;

}