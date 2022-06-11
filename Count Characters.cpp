#include<iostream>
using namespace std;

int main(){

    char ch;
    ch=cin.get();
    int abc = 0;
    int num = 0;
    int space = 0;
    
    while(ch!= '$'){
    	if(ch>='a' && ch<='z'){
    		
    		abc+=1;
    		
		}
		else if(ch>='0'&& ch<='9'){
			
			num+=1;
		}
		else if(ch==' ' || ch=='\n' || ch=='\t'){
			
			space+=1;
		}
		    
		    ch=cin.get();
		    
	}
	        cout<<abc<<" "<<num<<" "<<space;
}
