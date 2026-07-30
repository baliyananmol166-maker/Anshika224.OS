#include <iostream>
using namespace std;
int main() {
    int a[10];
    for(int i=0;i<10;i++){
        cin >> a[i];
    }
    int team1, team2;
    team1=0;
    team2=0;
    for(int i=0; i<10; i++){
        if(a[i]==1 && i%2==0){
            team2++;
        }
        if(a[i]==1 && i%2 !=0){
            team1++;
        }
    }
    if(team1>team2){
        cout << "1";
    }
    else{
        cout << "2";
    }
    return 0;

}