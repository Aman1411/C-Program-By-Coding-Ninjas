#include<iostream>
#include<climits>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int input[100];
	for(int i=0; i<n; i++){
		cin >> input[i];
		
	}
	
	for(int i=0; i<n; i++){
		cout << input[i] << endl;
	}
	
	
	
	int max = INT_MIN;
	for(int i=0; i<n; i++){
		max = input[i];
	}
	cout <<"Max : "<< max << endl;
}