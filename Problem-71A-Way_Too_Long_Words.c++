// A word is "too long" if its length > 10.
// For such words, replace with: first letter + (number of middle letters) + last letter.
// Example: "localization" → "l10n".
// Otherwise, print the word as it is.

#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        string str;
        cin >> str;
        
        int len = str.length();
        
        if(len <= 10){
            cout << str << endl;
        } else {
            cout << str[0] << (len - 2) << str[len - 1] << endl;
        }
    }

    return 0;
}