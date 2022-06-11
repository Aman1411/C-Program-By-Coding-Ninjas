#include <iostream>
#include <cstring>
using namespace std;

/*bool isPermutation(char input1[], char input2[]) {
    // Write your code here
}
*/
#include <bits/stdc++.h>

bool isPermutation(char str1[],char str2[]){
    // Get lengths of both strings.
    int n1=0;
    for(;str1[n1];n1++);
    int n2=0;
    for(;str2[n2];n2++);
    

    if (n1 != n2){
       return false;
    }

    
    sort(str1, str1+n1);
    sort(str2, str2+n2);

    for (int i = 0; i < n1; i++){
        if (str1[i] != str2[i]){
            return false;
        }
    }
    return true;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}
