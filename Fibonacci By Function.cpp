#include<iostream>
using namespace std;

bool checkMember(int n){
    if(n<=2)	{
        return true;
    }
    
    int a=0,b=1;
    
    int curr = a+b;
    while(curr <= n) {
        if(curr == n)	return true;
		a = b;
        b = curr;
		curr = a+b;
    }
    return false;
    
int main(){

  int n; 
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }

}

}
