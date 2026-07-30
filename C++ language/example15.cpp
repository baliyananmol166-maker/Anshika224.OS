#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u';
}
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int consonants = 0;
    for (char ch : s) {
        if (isVowel(ch)) {
            consonants = 0;        
        } else {
            consonants++;          
            if (consonants >= 4) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}