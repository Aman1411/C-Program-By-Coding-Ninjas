#include<iostream>
using namespace std;

void printTable(int start, int end, int step) {
    
    while(start <= end){
        int celsiusvalue = (int)((5.0/9)*(start -32));
    cout << start << " " << celsiusvalue << endl;
    start += step;
    }
}    
  

int main(){
    int start, end, step;
    cin >> start >> end >> step;
  
    printTable(start, end, step);

}
