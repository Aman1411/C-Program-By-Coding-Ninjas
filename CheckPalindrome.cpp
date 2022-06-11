#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(string S)
{
   
    for (int i = 0; i < S.length() / 2; i++) {
 
        if (S[i] != S[S.length() - i - 1]) {
    
            return false;
        }
    }
    
    return true;
}



int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}
