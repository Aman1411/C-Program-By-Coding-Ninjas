#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int decimal_value=0, weight=1;
	while(n!= 0){
		int remainder = n%10;
		decimal_value = decimal_value + remainder*weight;
		n /= 10;
		weight = weight*2;
	}
	cout << decimal_value;
	return 0;
}
