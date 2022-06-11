#include<iostream>
using namespace std;

int lenght(char input[]){
	int count = 0;
	for(int i=0; input[i] !='\0'; i++){
		count++;
	}
	return count;
}

int main(){
	char name[100];
	cout << " Enter your name" << endl;
	cin >> name;
	cout << "Name : " << name << endl;
	
	cout <<"Lenght : " <<  lenght(name) << endl;
}
