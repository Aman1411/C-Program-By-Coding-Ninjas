#include <iostream>
#include <cstring>
#include<string>
using namespace std;

string getCompressedString(string &input) {
    
    if(input.length()==0){
        return"";
        }
    int startindex=0,endindex=0;
    string compressedstring="";
    while(startindex<input.length()){
        while((endindex<input.length()) && (input[endindex]==input[startindex])){
            endindex+=1;
        }
        
        int totalcharcount=endindex-startindex;
        if(totalcharcount!=1){
            compressedstring+=input[startindex];
            compressedstring+=(char)(totalcharcount+'0');
        }
        else{
            compressedstring+=input[startindex];
        }
        startindex=endindex;
    }
    return compressedstring;
}        

int main() {
    int size = 1e6;
    string str;
    getline(cin, str);
    str = getCompressedString(str);
    cout << str << endl;
}
