#include<iostream>
using namespace std;

double findArea(double radius){
	double area = 3.14 * radius * radius;
	return area;
}

int main(){
	double radius = 5.2;
	double c = findArea(radius);
	cout << c;
}
